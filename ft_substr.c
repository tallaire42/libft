/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 15:35:01 by tallaire          #+#    #+#             */
/*   Updated: 2019/12/04 17:11:26 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (start > len)
		return (ft_calloc(1, sizeof(char)));
	if (!(str = (char*)malloc(len - start)))
		return (NULL);
	while (start <= len)
		*(str + i++) = *(s + start++);
	*(str + i) = '\0';
	return (str);
}
