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
	int	k;
	char	s[6][300];
	char	c[5];
	char	**split;

	c[0] = ' ';
	c[1] = ' ';
	c[2] = ' ';
	c[3] = 'i';
	c[4] = 'z';
	ft_strcpy(s[0], "                ");
	ft_strcpy(s[1], "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse");
	ft_strcpy(s[2], "     lorem        ipsum dolor     sit amet, consectetur       adipiscing elit. Sed non risus. Suspendisse     ");
	ft_strcpy(s[3], "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.");
	ft_strcpy(s[4], "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.");
	i = 1;
	j = 0;
	k = 0;
	while (i < 6)
	{
		printf("*****************************************\n");
		printf("test %d\n", i);
		printf("*****************************************\n");
		split = ft_split(s[j], c[j]);
		while (split[k] != NULL)
		{
			printf("[%s]\n", split[k]);
			++k;
		}
		k = 0;
		++i;
		++j;
	}
	return (0);
}
