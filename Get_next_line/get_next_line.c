/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:32:55 by ppiirone          #+#    #+#             */
/*   Updated: 2021/12/05 15:32:57 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int	take_line(const int fd, char **line, char *arr[FD_SIZE], int end);
static	int	read_fd(const int fd, char **line, char *arr[FD_SIZE]);

int	get_next_line(const int fd, char **line)
{
	static char	*arr[FD_SIZE];

	if (read(fd, arr[0], 0) < 0)
		return (-1);
	if (fd >= FD_SIZE - 1)
		return (-1);
	arr[FD_SIZE - 1] = "1";
	take_line(fd, line, arr, 1);
	if (ft_strcmp(arr[FD_SIZE - 1], "0") == 0)
		*line = NULL;
	return (ft_atoi(arr[FD_SIZE - 1]));
}

static	int	read_fd(const int fd, char **line, char *arr[FD_SIZE])
{
	char	buf[BUFF_SIZE + 1];
	int		bytes_read;
	char	*tmp;

	ft_bzero(buf, BUFF_SIZE + 1);
	bytes_read = read(fd, buf, BUFF_SIZE);
	if (bytes_read > 0)
	{
		tmp = ft_strjoin(arr[fd], buf);
		ft_bzero(buf, BUFF_SIZE);
		free(arr[fd]);
		arr[fd] = ft_strdup(tmp);
		ft_bzero(tmp, ft_strlen(tmp));
		free(tmp);
		return (take_line(fd, line, arr, 1));
	}
	else if (bytes_read < 0)
	{
		arr[FD_SIZE - 1] = "-1";
		return (-1);
	}
	take_line(fd, line, arr, 0);
	return (0);
}

static int	take_line(const int fd, char **line, char *arr[FD_SIZE], int end)
{
	int		i;
	char	*tmp;

	i = 0;
	while ((arr[fd]) && arr[fd][i])
	{
		if (arr[fd][i] == '\n')
		{
			arr[fd][i] = '\0';
			*line = ft_strdup(arr[fd]);
			tmp = ft_strdup(&(arr)[fd][i + 1]);
			free(arr[fd]);
			arr[fd] = ft_strdup(tmp);
			free(tmp);
			return (0);
		}
		i++;
	}
	//bytes_read == 0
	//&& str[arr] ends to null-terminator (no new line anymore)
	if (end == 0)
	{
		*line = ft_strdup(arr[fd]);
		if (arr[fd][0] == '\0')
			arr[FD_SIZE - 1] = "0";
		//ft_bzero(arr[fd], ft_strlen(arr[fd]));
	}
	else //(end == 1)
		read_fd(fd, line, arr);
	return (0);
}



# include <stdio.h>//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main()
{
	char **line;
	int fd = open("test.txt", O_RDONLY);
	//int df = open("test2.txt", O_RDONLY);
	int res;


	int c = 0;
	while (c < 10)
	{
		res = get_next_line(fd, line);
		printf("Return is %i\t", res);
		printf("%s\n", *line);
		//res = get_next_line(df, line);
		//printf("Return is %i\t", res);
		//printf("%s\n", *line);
		c++;
	}
	return (0);
}
