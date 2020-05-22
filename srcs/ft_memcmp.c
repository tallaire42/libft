/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:21 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:21 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const	unsigned	char	*buff_s1;
	const	unsigned	char	*buff_s2;

	i = 0;
	buff_s1 = (const unsigned char *)s1;
	buff_s2 = (const unsigned char *)s2;
	if (n == 0 || s1 == s2)
		return (0);
	while (i < n)
	{
		if (buff_s1[i] != buff_s2[i])
			return ((int)(buff_s1[i] - buff_s2[i]));
		++i;
	}
	return (0);
}
