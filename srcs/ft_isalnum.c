/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:26:32 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:26:33 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

int	ft_isalnum(int c)
{
	unsigned	char	l;

	l = (unsigned char)c;
	if ((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z') ||
	(l >= '0' && l <= '9'))
		return (l);
	else
		return (0);
}