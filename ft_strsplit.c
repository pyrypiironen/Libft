/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:15:39 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/19 12:15:42 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)//not-equals delimiter
		{
			count++;
			while (s[i] != c && s[i] != '\0')//Find char after last char of word
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free_all(char **arr, int size)
{
	while (size > 0)
	{
		free(arr[size - 1]);
		size--;
	}
	free(arr);
	return (NULL);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	start;
	size_t	delimiter;
	int		i;
	char 	**ret;

	delimiter = 0;
	i = 0;
	if (s == 0)//Is this enough?
		return (NULL);
	ret = ft_memalloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	while (s[delimiter]== c)
		delimiter++;
	start = delimiter;//starting index of first word
	while (s[start])
	{
		while (s[delimiter] != c)//to next delimiter
			delimiter++;
		ret[i] = ft_strsub(s, start, (delimiter - start));//allocate string to array
		if (ret[i] == NULL)
			return (ft_free_all(ret, i - 1));
		i++;
		while (s[delimiter] == c)//to next character
			delimiter++;
		start = delimiter;
	}
	return (ret);
}
// 3 lines too much
//input *s not includes any non-delimiter characters -> return NULL?
//input *s is empty -> return NULL?
