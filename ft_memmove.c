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
	size_t	i;
	void	*buf;

	i = 0;
	buf = ft_memalloc(sizeof(char) * (ft_strlen(src) + 1));
	while (((char *)src)[i])
	{
		((char *)buf)[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = ((char *)buf)[i];
		i++;
	}
	ft_memdel(&buf);
	return (dst);
}
