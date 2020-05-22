/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:56:26 by tallaire          #+#    #+#             */
/*   Updated: 2020/04/04 15:56:28 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_LIBFT_H
# define DEF_LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include "ft_printf.h"

/*
** Fonctions obligatoire de la libft.
*/

void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(const char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(const char *str, int fd);
int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	get_next_line(int fd, char **line);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dst, char const *src);
char	*ft_strdup(const char *str);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *str, unsigned int start, size_t len);
char	**ft_split(const char *s, char c);
void	*ft_calloc(size_t nb_elmt, size_t size);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

/*
** Mes fonctions
*/

void	print_binary(long long int value, int nb_octet);
int	c_is_str(char *str, int c);

char	*ft_itoa_base(int n, int base);

# endif
