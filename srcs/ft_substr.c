/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:28:46 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:47 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

static	size_t	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		++i;
	return (i);
}

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*new;

	new = NULL;
	i = 0;
	size = len + (size_t)start;
	if (size > ft_len(str))
		size = ft_len(str) - (size_t)start;
	if (!(new = malloc(size + 1)))
		return (NULL);
	while (str && str[i] && i < len)
	{
		new[i] = str[start];
		++i;
		++start;
	}
	new[i] = '\0';
	return (new);
}
