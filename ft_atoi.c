/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:01:59 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/08 20:02:02 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	atoi_returner(const char *str, unsigned long int res, int sign);

int	ft_atoi(const char *str)
{
	unsigned long int	res;
	int					sign;

	res = 0;
	sign = 1;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\v' || *str == '\f' ||\
		*str == '\t' || *str == '\r')
			str++;
		else if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = -1;
			str++;
			if (*str < '0' || *str > '9')
				return (0);
		}
		else
			break ;
	}
	return (atoi_returner(str, res, sign));
}

static int	atoi_returner(const char *str, unsigned long int res, int sign)
{
	while (*str && *str >= '0' && *str <= '9')
	{
		if (res > 9223372036854775807 && sign < 0)
				return (0);
		if (res > 9223372036854775807 && sign > 0)
				return (-1);
		res = res * 10 + *str - '0';
		str++;
	}
	return (int)(sign * res);
}
