/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:38:15 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/20 18:38:19 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst == NULL)
		ft_lstnew(new->content, new->content_size);
	new->next = *alst;
	*alst = new;
}
