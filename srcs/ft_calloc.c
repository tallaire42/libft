/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:26:28 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:26:29 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

void	*ft_calloc(size_t nb_elmt, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (nb_elmt == 0 || size == 0)
		return (str);
	if (!(str = malloc((nb_elmt + 1) * size)))
		return (NULL);
	while (i < nb_elmt)
	{
		str[i] = '\0';
		++i;
	}
	return (str);
}

