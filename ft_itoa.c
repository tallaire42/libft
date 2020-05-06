/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:05:06 by tallaire          #+#    #+#             */
/*   Updated: 2020/03/12 16:18:49 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	static	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t	len;
	size_t	sign;
	char	*str;

	len = ft_len(n);
	sign = 0;
	if (n < 0)
		sign++;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	*(str + len) = '\0';
	while (len)
	{
		len--;
		if (n < 0)
			*(str + len) = ((n % 10) * (-1)) + '0';
		else
			*(str + len) = (n % 10) + '0';
		n /= 10;
	}
	if (sign)
		*(str + len) = '-';
	return (str);
}

