/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:53 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:53 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	char			*str;
	unsigned	char	l;

	i = 0;
	str = (char *)s;
	l = (unsigned char)c;
	if (str == NULL)
		return (NULL);
	while (*str != l)
	{
		if (*str == '\0')
			return (NULL);
		++str;
	}
	return (str);
}
