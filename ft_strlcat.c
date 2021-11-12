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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	res;

	i = 0;
	d_len = strlen(dst);
	res = strlen(src) + strlen(dst);
	while (d_len + i < dstsize && src[i])
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return (res);
}
//https://c-for-dummies.com/blog/?p=3896

/*while (dst[i])
		i++;
	while (src[y] && i < dstsize - 1)
	{
		dst[i] = src[y];
		i++;
		y++;
	}
	i++;
	dst[i] = '\0'; */