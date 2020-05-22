/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:28:07 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:07 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		len_src;

	i = 0;
	len_src = 0;
	while (src[len_src])
		++len_src;
	if (size == 0)
		return (len_src);
	while (dst[i] && i < size)
		++i;
	j = i;
	while (src [i - j] && i < size - 1)
	{
		dst[i] = src[i - j];
		++i;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + len_src);
}
