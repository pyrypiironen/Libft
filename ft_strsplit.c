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

static int	ft_is_delimiter(char c, char d)
{
	if (c == d)
		return (1);//delimiter found
	else
		return (0);
}

static int	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (ft_is_delimiter(s[i], c) == 1)
			i++;//start of word (or null-terminator)
		if (s[i] == '\0')
			break ;//break if there is no more words
		count++;
		while (ft_is_delimiter(s[i], c) == 0)
			i++;//skip the characters of word 
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	start;
	size_t	delimiter;
	int		i;
	char 	**ret;

	delimiter = 0;
	i = 0;
	if (ft_strlen(s) == 0 || s == NULL || ft_count_words(s, c) == 0)
		return (NULL);
	ret = ft_memalloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	while (ft_is_delimiter(s[delimiter], c) == 1)
		delimiter++;
	start = delimiter;//starting index of first word
	while (s[start])
	{
		while (ft_is_delimiter(s[delimiter], c) == 0)
			delimiter++;//next delimiter now
		ret[i] = ft_strsub(s, start, (delimiter - start));
		if (ret[i] == NULL)
			return (NULL);
		i++;
		while (ft_is_delimiter(s[delimiter], c) == 1)
			delimiter++;//next character or null/terminator
		start = delimiter;
	}
	return (ret);
}
// two lines too much
// free memory if llocating fails?
//input *s not includes any non-delimiter characters -> return NULL
//input *s is empty -> return NULL
