/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:28:49 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:28:50 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned	char	l;

	l = (unsigned char)c;
	if (l >= 'A' && l <= 'Z')
		return (l + 32);
	else
		return (l);
}
