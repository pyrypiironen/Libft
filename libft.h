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

int		ft_atoi(const char *str);//DONE-------------
void	ft_bzero(void *s, size_t n);//OK
int		ft_isalpha(int c);//OK
int		ft_isdigit(int c);//OK
int		ft_isalnum(int c);//OK
int		ft_isascii(int c);//OK
int		ft_isprint(int c);//OK
void	*ft_memalloc(size_t size);//OK
void	ft_memdel(void **ap);//OK
void	*ft_memchr(const void *s, int c, size_t n);//OK
int		ft_memcmp(const void *s1, const void *s2, size_t n);//OK
void	*ft_memcpy(void *dst, const void *src, size_t n);//OK
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);//OK
void	*ft_memmove(void *dst, const void *src, size_t len);//------------------
void	*ft_memset(void *b, int c, size_t len);//OK
void	ft_putchar(char c);//OK
void	ft_putnbr(int n);//DONE
void	ft_putstr(char const *s);//OK
void	ft_putendl(char const *s);//OK
char	*ft_strcat(char *s1, const char *s2);//---------------------------------
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);//DONE
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);//OK (missing tests)
char	*ft_strcpy(char * dst, const char * src);//DONE
char	*ft_strncpy(char * dst, const char * src, size_t len);//DONE
char	*ft_strchr(const char *s, int c);//DONE
char	*ft_strrchr(const char *s, int c);//DONE
char	*ft_strstr(const char *haystack, const char *needle);//DONE
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);//DONE
int		ft_strcmp(char *s1, char *s2);//DONE
int		ft_strncmp(const char *s1, const char *s2, size_t n);//DONE
char	*ft_strdup(const char *s1);//DONE with malloc
size_t	ft_strlen(const char *s);//DONE
char	*ft_strnew(size_t size);//OK
char	*ft_strdel(char **as);//OK
void	ft_strclr(char *s);//DONE
void	ft_striter(char *s, void (*f)(char *));//OK
void	ft_striteri(char *s, void (*f)(unsigned int, char *));//OK
char	*ft_strmap(char const *s, char (*f)(char));//OK
int		ft_tolower(int c);//DONE
int		ft_toupper(int c);//DONE

#endif