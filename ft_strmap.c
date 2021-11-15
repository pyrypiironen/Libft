/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:25:34 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/11 18:25:47 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*res;

	i = 0;
	res = (char *)malloc(sizeof(*res) * (strlen(s) + 1));
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
