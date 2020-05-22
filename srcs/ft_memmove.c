/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:28 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:29 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned	char		*buff_dst;
	const	unsigned	char	*buff_src;

	i = 0;
	buff_dst = (unsigned char *)dst;
	buff_src = (const unsigned char *)src;
	if (src < dst)
	{
		i = n;
		while (i > 0)
		{
			--i;
			buff_dst[i] = buff_src[i];
		}
	}
	else
	{
		while (i < n)
		{
			buff_dst[i] = buff_src[i];
			++i;
		}
	}
	return (dst);
}
