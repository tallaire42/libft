/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:38 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:39 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *str, int fd)
{
	size_t	len;
	char	c;

	len = 0;
	c = '\n';
	if (str == NULL)
		return ;
	while (str && str[len])
		++len;
	write(fd, str, len);
	write(fd, &c, 1);
}

