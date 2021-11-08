/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:28:41 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/08 16:28:43 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	box;
	int				i;

	str = (char *)s;
	box = (unsigned char)c;
	i = 0;
	while (*str != '\n')
	{
		str++;
		i++;
	}
	while (*str != box && i > 0)
		str--;
	if (*str == box)
		return (str);
	return (NULL);

}
