/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:06 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:07 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

int	ft_isprint(int c)
{
	unsigned	char	l;

	l = (unsigned char)c;
	if (l >= 32 && l <= 126)
		return (l);
	else
		return (0);
}
