/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:17 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:18 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const	unsigned	char	*buff_s;

	i = 0;
	buff_s = (const unsigned char *)s;
	while (i < n)
	{
		if (buff_s[i] == (unsigned char)c)
			return ((void *)(buff_s + i));
		++i;
	}
	return (NULL);
}
