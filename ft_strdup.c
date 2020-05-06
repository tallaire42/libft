/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:59 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:00 by tallaire         ###   ########.fr       */
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

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*new;

	i = 0;
	new = NULL;
	if (str == NULL)
		return (NULL);
	if (!(new = malloc(ft_len(str) + 1)))
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (str && str[i])
	{
		new[i] = str[i];
		++i;
	}
	new[i] = '\0';
	return (new);
}
