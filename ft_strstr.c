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
	size_t	i;

	i = 0;
	if (needle == NULL)
		return (char *)(haystack);
	while (i < strlen(haystack))
	{
		if (ft_strncmp(haystack, needle, strlen(needle)) == 0)
			return (char *)(haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
