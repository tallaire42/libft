/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:11:36 by tallaire          #+#    #+#             */
/*   Updated: 2019/12/09 14:22:51 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*buff;

	buff = (char *)s;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			*(buff + i) = '\0';
			i++;
		}
	}
}
