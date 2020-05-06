/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:31 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:32 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned	char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (str && i < n)
	{
		str[i] = (unsigned char)c;
		++i;
	}
	return (s);
}
