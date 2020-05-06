/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:28:38 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:38 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned	char	l;
	char			*str;

	l = (unsigned char)c;
	str = (char *)s;
	while (*str)
		++str;
	while ((unsigned char)(*str) != l)
	{
		if (s == (const char *)str)
			return (NULL);
		--str;
	}
	return (str);
}
