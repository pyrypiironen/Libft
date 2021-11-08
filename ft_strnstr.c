/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:08:44 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/08 19:08:46 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*stack;
	size_t	i;

	stack = (char *)haystack;
	i = 0;
	if (strlen(needle) == 0)
		return (stack);
	while (i < strlen(haystack) && i < len)
	{
		if (ft_strncmp(stack, needle, strlen(haystack - i)) == 0\
			&& (len - i) >= strlen(needle))
			return (stack);
		stack++;
		i++;
	}
	return (NULL);
}
