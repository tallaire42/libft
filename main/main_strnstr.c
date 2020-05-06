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
	char	little[5][10];
	size_t	len[5] = {15, 15, 35, 30};

	ft_strcpy(big[0], "lorem ipsum dolor sit amet");
	ft_strcpy(big[1], "lorem ipsum dolor sit amet");
	ft_strcpy(big[2], "lorem ipsum dolor sit lorem ipsum dolor");
	ft_strcpy(big[3], "lorem ipsum dolor sit amet");
	ft_strcpy(little[0], "ipsum");
	ft_strcpy(little[1], "ipsum");
	ft_strcpy(little[2], "ipsum");
	ft_strcpy(little[3], "dol");
	i = 1;
	j = 0;

	while (i < 5)
	{
		printf("*****************************************\n");
		printf("test %d\n", i);
		printf("*****************************************\n");
		printf("[%s]\n", ft_strnstr(big[j], little[j], len[j]));
		printf("-----------------------------------------\n");
		//printf("[%d]\n", strnstr(big[j], little[j], len[j]));
		++i;
		++j;
	}
	return (0);
}

