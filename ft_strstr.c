/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:34:52 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/08 18:35:09 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*stack;
	size_t	i;

	stack = (char *)haystack;
	i = 0;
	if (strlen(needle) == 0)
		return (stack);
	while (i < strlen(haystack))
	{
		if (ft_strncmp(stack, needle, strlen(haystack - i)) == 0)
			return (stack);
		stack++;
		i++;
	}
	return (NULL);
}
