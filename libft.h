/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:51:30 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/02 18:51:32 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		ft_isdigit(int c);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
char	*ft_strcat(char *str1, const char *str2);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);


#endif