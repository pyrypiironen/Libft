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

void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);//DONE
int		ft_isdigit(int c);//DONE
int		ft_isalnum(int c);//DONE
int		ft_isascii(int c);//DONE
int		ft_isprint(int c);//DONE
void	*ft_memchr(const void *s, int c, size_t n);//Where the pointer is -> test it more
int		ft_memcmp(const void *s1, const void *s2, size_t n);//DONE
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);//DONE
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, \
	size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);//NORMINETTE + MALLOC
void	*ft_memset(void *b, int c, size_t len);//DONE
void	ft_putchar(char c);//DONE
void	ft_putnbr(int n);//DONE
void	ft_putstr(char const *s);//DONE
void	ft_putendl(char const *s);//DONE
char	*ft_strcat(char *restrict s1, const char *restrict s2);//DONE
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);//DONE
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t \
	dstsize);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(const char *src);//DONE
int		ft_strlen(char *str);//DONE
int		ft_tolower(int c);//DONE
int		ft_toupper(int c);//DONE

#endif