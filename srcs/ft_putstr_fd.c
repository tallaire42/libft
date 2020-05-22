/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:27:46 by tallaire          #+#    #+#             */
/*   Updated: 2020/05/02 11:27:46 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	size_t	len;

	len = 0;
	if (str == NULL)
		return ;
	while (str && str[len])
		++len;
	write(fd, str, len);
}
