/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:42:13 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/04 16:44:31 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, \
	size_t dstsize)
{
	size_t	i;
	int		y;
	int		res;

	i = 0;
	y = 0;
	res = strlen(src) + strlen(dst);
	while (dst[i])
		i++;
	while (src[y] && i < dstsize - 1)
	{
		dst[i] = src[y];
		i++;
		y++;
	}
	i++;
	dst[i] = '\0';
	return (res);
}
//https://c-for-dummies.com/blog/?p=3896