/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:48:24 by tallaire          #+#    #+#             */
/*   Updated: 2019/12/04 14:59:36 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned	char	*buffdst;
	unsigned	char	*buffsrc;

	i = 0;
	buffdst = (unsigned char*)dst;
	buffsrc = (unsigned char*)src;
	if (src == dst)
		return (dst);
	if (buffsrc < buffdst)
	{
		while (i++ <= len)
			*(buffdst + (len - i)) = *(buffsrc + (len - i));
	}
	else
	{
		while (i++ <= len)
			*(buffdst + i) = *(buffsrc + i);
	}
	return (dst);
}
