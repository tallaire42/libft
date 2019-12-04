/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:49:36 by tallaire          #+#    #+#             */
/*   Updated: 2019/12/03 17:05:53 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trim(char *cpy, const char *set, int len)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i <= len)
	{
		while (++j <= (int)ft_strlen(set))
			if (*(set + j) == *(cpy + i))
				*(cpy + i) = '\0';
		j = -1;
		if (*(cpy + i) != '\0')
			i = len;
	}
	while (--i >= 0)
	{
		while (++j <= (int)ft_strlen(set))
			if (*(set + j) == *(cpy + i))
				*(cpy + i) = '\0';
		j = -1;
		if (*(cpy + i) != '\0')
			i = 0;
	}
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		len;
	char	*trim;
	char	*cpy;

	i = -1;
	j = -1;
	len = (int)ft_strlen(s1);
	cpy = (char*)malloc(len);
	trim = (char*)malloc(len);
	ft_strlcpy(cpy, s1, len);
	ft_trim(cpy, set, len);
	while (++i <= len)
	{
		while (*(cpy + i) == '\0')
			i++;
		*(trim + ++j) = *(cpy + i);
	}
	*(trim + j) = '\0';
	return (trim);
}
