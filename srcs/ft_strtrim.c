/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:28:42 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:43 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

static	int	is_c_in_str(int c, const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
	{
		if (c == (int)str[i])
			return (i);
		++i;
	}
	return (-1);
}

static	size_t	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		++i;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*new;

	i = 0;
	j = 0;
	size = ft_len(s1);
	new = NULL;
	while (set && s1 && is_c_in_str((int)s1[size - 1], set) >= 0 && size > 0)
		--size;
	while (set && s1 && is_c_in_str((int)s1[j], set) >= 0 && s1[j])
		++j;
	if (j > size)
		j = 0;
	if (!(new = malloc((size - j) + 1)))
		return (NULL);
	while (s1 && j < size)
	{
		new[i] = s1[j];
		++i;
		++j;
	}
	new[i] = '\0';
	return (new);
}

