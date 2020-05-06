/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:49 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:50 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	is_a_new_element(const char *str, char sep)
{
	if (*str == sep && *(str + 1) != sep && *(str + 1) != '\0')
		return (1);
	return (0);
}

static	size_t	nb_element(const char *str, char sep)
{
	size_t	i;
	size_t	nb_element;

	i = 0;
	nb_element = 0;
	if (*str != sep && *str != '\0')
		nb_element = 1;
	while (str && str[i])
	{
		if (is_a_new_element((str + i), sep) > 0)
			++nb_element;
		++i;
	}
	return (nb_element);
}

static	char	**free_new(char **split, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(split[i]);
		split[i] = NULL;
		++i;
	}
	free(split);
	split = NULL;
	return (split);
}

static	char	*new_array(const char *str, char sep, size_t *i)
{
	size_t	size;
	size_t	j;
	char	*new;

	size = 0;
	j = 0;
	while (str && str[*i + size] && str[*i + size] != sep)
		++size;
	if (!(new = malloc(size + 1)))
		return (NULL);
	while (str && str[*i] && str[*i] != sep)
	{
		new[j] = str[*i];
		++j;
		++*i;
	}
	new[j] = '\0';
	return (new);
}

char		**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size_new;
	char	**new;

	i = 0;
	j = 0;
	size_new = nb_element(s, c);
	if (!(new = (char **)malloc(sizeof(char *) * (size_new + 1))))
		return (free_new(new, j));
	while (s && s[i] && j < size_new)
	{
		if (s[i] && s[i] != c)
		{
			if (!(new[j] = new_array(s, c, &i)))
				return (free_new(new, j));
			++j;
		}
		++i;
	}
	new[j] = NULL;
	return (new);
}
