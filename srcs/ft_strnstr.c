/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:28:31 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:34 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

static	int	ft_parse(const char *big, const char *little, size_t len, size_t count)
{
	size_t		i;

	i = 0;
	while (big[i] == little[i] && i + count < len)
	{
		if (little[i + 1] == '\0')
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == *little)
			if (ft_parse((big + i), little, len, i) == 1)
				return ((char *)(big + i));
		++i;
	}
	return (NULL);
}
