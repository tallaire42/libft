/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:28:21 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:22 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		++i;
	return (i);
}

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*new;
	int	index;

	index = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(new = malloc(ft_len(s) + 1)))
		return (NULL);
	while (s[index])
	{
		new[index] = f(index, s[index]);
		++index;
	}
	new[index] = '\0';
	return (new);
}
