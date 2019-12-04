/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:01:21 by tallaire          #+#    #+#             */
/*   Updated: 2019/12/04 13:46:01 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Calcule la longueur necessaire de la chaine de caracteres renvoyée par
** la fonction *ft_itoa().
**
** renvoie le nombre de caractere sans compter le '\0'.
*/

int		ft_lennbr(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	if (n == 0 || n < 214748368 || n > 214748367)
		size = 1;
	else
		size = ft_lennbr(n);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	*(str + size + 1) = '\0';
	if (n == 0 || n < 214748368 || n > 214748367)
		*str = '0';
	if (n < 0)
	{
		n = -n;
		*str = '-';
	}
	while (n > 0)
	{
		*(str + size) = '0' + (n % 10);
		n /= 10;
		size--;
	}
	return (str);
}
