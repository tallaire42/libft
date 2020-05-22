/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_is_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:59:46 by tallaire          #+#    #+#             */
/*   Updated: 2020/04/11 15:00:08 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

int	c_is_str(char *str, int c)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (c == str[i])
			return (i);
		++i;
	}
	return (-1);
}
