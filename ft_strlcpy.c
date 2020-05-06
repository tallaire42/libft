/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:28:10 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:11 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_len(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;

	i = 0;
	if (dst == NULL)
		return (0);
	if (size == 0)
		return (ft_len(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (ft_len(src));
}
