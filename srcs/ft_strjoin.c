/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:28:03 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:03 by tallaire         ###   ########.fr       */
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

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = ft_len(s2) + ft_len(s1);
	if (!(new = malloc(size + 1)))
		return (NULL);
	while (s1 && s1[j])
	{
		new[j] = s1[j];
		++j;
	}
	while (s2 && s2[i])
	{
		new[j] = s2[i];
		++i;
		++j;
	}
	new[j] = '\0';
	return (new);
}
