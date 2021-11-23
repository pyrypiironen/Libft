/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:38:34 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/20 19:38:43 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_positive(int n);
static char	*ft_strdup_rev(const char *s1);

char	*ft_itoa(int n)
{
	int		i;
	char	arr[20];
	long	k;

	i = 0;
	k = n;
	ft_bzero(arr, 20);
	if (ft_is_positive(n) == -1)
		k = k * -1;
	arr[i] = k % 10 + '0';
	i++;
	while (k / 10 > 0)
	{
		k = k / 10;
		arr[i] = (k % 10 + '0');
		i++;
	}
	if (ft_is_positive(n) == -1)
		arr[i] = '-';
	return (ft_strdup_rev(arr));
}

static int	ft_is_positive(int n)
{
	if (n < 0)
		return (-1);
	else
		return (0);
}

static char	*ft_strdup_rev(const char *s1)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	dup = ft_memalloc(sizeof(char *) * (len + 1));
	if (dup == NULL)
		return (NULL);
	len--;
	while (len >= 0)
	{
		dup[i] = s1[len];
		len--;
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
