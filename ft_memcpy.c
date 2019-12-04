/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:37:02 by tallaire          #+#    #+#             */
/*   Updated: 2019/12/04 13:43:15 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned	char	*buffdst;
	unsigned	char	*buffsrc;

	buffdst = (unsigned char*)dst;
	buffsrc = (unsigned char*)src;
	if (dst == src)
		return (dst);
	while (n--)
		*(buffdst++) = *(buffsrc++);
	return (dst);
}
