/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:25 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:25 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned	char	*buff_dst;

	i = 0;
	buff_dst = (unsigned char *)dst;
	while (i < n)
	{
		buff_dst[i] = ((const unsigned char *)src)[i];
		++i;
	}
	return (dst);
}
