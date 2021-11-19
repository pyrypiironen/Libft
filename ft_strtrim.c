/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:22:19 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/18 15:22:21 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	last;
	char	*res;

	i = 0;
	res = ft_memalloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == NULL)
		return (NULL);
	while (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\n')
		i++;
	ft_strcpy(res, (s + i));
	last = ft_strlen(res) - 1;
	while (*(res + last) == ' ' || *(res + last) == '\t' ||
		*(res + last) == '\n')
		last--;
	while (last < ft_strlen(res))
	{
		if (res[last] == ' ' || res[last] == '\t' || res[last] == '\n')
			res[last] = '\0';
		last++;
	}
	return (res);
}
// memory leak?