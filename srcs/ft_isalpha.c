/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:26:53 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:26:54 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

int	ft_isalpha(int c)
{
	unsigned	char	l;

	l = (unsigned char)c;
	if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z'))
		return (c);
	else
		return (0);
}
