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
	char	big[5][50];
	char	little[10];
	size_t	len[5] = {15, 15, 35, 30};

	ft_strcpy(big[0], "lorem \n ipsum \t dolor \n sit \t amet");
	ft_strcpy(big[1], "lorem ipsum dolor sit amet \n \t ");
	ft_strcpy(big[2], " \n \t lorem ipsum dolor sit amet");
	ft_strcpy(big[3], " \n \t lorem \n ipsum \t dolor \n sit \t amet \t \n ");
	ft_strcpy(big[4], "           ");

	ft_strcpy(little, "\t \n");
	i = 1;
	j = 0;

	while (i < 6)
	{
		printf("*****************************************\n");
		printf("test %d\n", i);
		printf("*****************************************\n");
		printf("[%s]\n", ft_strtrim(big[j], little));
		++i;
		++j;
	}
	return (0);
}

