/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:14 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:14 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned	char	*buff_dst;

	i = 0;
	buff_dst = (unsigned char *)dst;
	if (dst == src || src == NULL)
		return (dst);
	while (i < n)
	{
		buff_dst[i] = ((const unsigned char *)src)[i];
		if (((const unsigned char *)src)[i] == (unsigned char)c)
			return (buff_dst + i + 1);
		++i;
	}
	return (NULL);
}
