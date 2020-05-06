/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 14:44:58 by tallaire          #+#    #+#             */
/*   Updated: 2020/04/04 14:44:59 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int	i;
	int	j;
	char	str[20][20];

	i = 0;
	j = 0;
	ft_strcpy(str[0], "0");
	ft_strcpy(str[1], "546:5");
	ft_strcpy(str[2], "-4886");
	ft_strcpy(str[3], "+548");
	ft_strcpy(str[4], "054854");
	ft_strcpy(str[5], "000074");
	ft_strcpy(str[6], "+-54");
	ft_strcpy(str[7], "-+48");
	ft_strcpy(str[8], "--47");
	ft_strcpy(str[9], "++47");
	ft_strcpy(str[10], "+47+5");
	ft_strcpy(str[11], "-47-5");
	ft_strcpy(str[12], "\e475");
	ft_strcpy(str[13], "\t\n\r\v\f  469 \n");
	ft_strcpy(str[14], "-2147483648");
	ft_strcpy(str[15], "2147483647");
	ft_strcpy(str[16], "\t\n\r\v\fd469 \n");
	ft_strcpy(str[17], "\n\n\n  -46\b9 \n5d6");
	ft_strcpy(str[18], "");
	while (i < 18)
	{
		printf("****************************\n");
		printf("test %d\n", i);
		printf("****************************\n");
		printf("[%d]\n", ft_atoi(str[j]));
		printf("----------------------------\n");
		printf("[%d]\n", atoi(str[j]));
		++i;
		++j;
	}
	return (0);
}

