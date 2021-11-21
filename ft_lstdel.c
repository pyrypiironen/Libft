/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:03:39 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/21 19:03:40 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	while ((*alst) != NULL)
	{
		ft_putendl((*alst)->content);//just for testing
		(*del)((*alst)->content, (*alst)->content_size);
		(*alst) = (*alst)->next;
	}
	free(*alst);
	*alst = NULL;
}
