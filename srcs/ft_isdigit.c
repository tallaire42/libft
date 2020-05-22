/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:02 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:03 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

int	ft_isdigit(int c)
{
	unsigned	char	l;

	l = (unsigned char)c;
	if (l >= '0' && l <= '9')
		return (c);
	else
		return (0);
}
