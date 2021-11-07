/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:32:46 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/07 15:32:47 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srce;
	unsigned char	*buf;

	i = 0;
	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	buf = (unsigned char *)malloc(sizeof(unsigned char) * len + 1);
	while (i < len)
	{
		*buf = *srce;
		i++;
		buf++;
		srce++;
	}
	while (i > 0)
	{
		i--;
		buf--;
	}
	while (i < len)
	{
		*dest = *buf;
		i++;
		dest++;
		buf++;
	}
	return (dst);
}
