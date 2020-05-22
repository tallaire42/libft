/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:26:59 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:26:59 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

int	ft_isascii(int c)
{
	unsigned	int	l;

	l = (unsigned int)c;
	if (l >= 0 && l <= 127)
		return (1);
	else
		return (0);
}