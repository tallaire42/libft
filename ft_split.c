/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:16:44 by tallaire          #+#    #+#             */
/*   Updated: 2019/12/03 17:07:40 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Verifie si l'on se situe à la fin d'une chaine à spliter.
**
** renvoie (1) si :
** - le caractere n est différent du separateur.
** - le caractere n + 1 est un séparateur ou un '\0'.
** sinon,
** renvoie (0).
*/

unsigned	int	ft_checkstr(char const *str, char sep, int i, int j)
{
	i = i + j;
	if (*(str + i) && *(str + i) != sep && (*(str + i + 1) == sep ||
	*(str + i + 1) == '\0'))
		return (1);
	return (0);
}

/*
** Calcule le nombre de chaines de caractères à spliter.
**
** revoie le nombre de chaines de caractères à spliter si :
** - Il y a moins une chaine de caractères à splitter.
** sinon,
** renvoie (-1) afin de faire echouer malloc().
*/

int				ft_lensplit(char const *str, char sep)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (*(str + i))
	{
		if (ft_checkstr(str, sep, i, 0))
			count++;
		i++;
	}
	if (count == 0)
		return (-1);
	else
		return (count);
}

/*
** Calcule la longueur des chaines de caractères à splitter.
** La logueur de chacune des chaines de caracteres est stockée
** dans une chaine de int.
**
** renvoie l'adresse de la chaine de int contenant la taille des différentes
** chaines de caracteres à splitter si :
** - l'allocation de memoire de la chaine de int avec malloc() n'échoue pas.
** sinon,
** renvoie (NULL);
*/

int				*ft_lenstr(char const *str, char sep)
{
	int		*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!(tab = (int*)malloc(sizeof(int) * ft_lensplit(str, sep))))
		return (NULL);
	while (*(str + i))
	{
		j = 0;
		while (*(str + i + j) && *(str + i + j) != sep)
		{
			if (ft_checkstr(str, sep, i, j))
			{
				*(tab + k) = j + 1;
				k++;
			}
			j++;
		}
		i = i + j + 1;
	}
	return (tab);
}

/*
** Split chaque chaines de caracteres à spliter et les copie séparément
** dans chacunes des chaines de la chaine de chaines de caracteres (**split).
** Ajoute un '\0' à la fin de chaque chaine de caracteres de **split.
**
** Ne renvoie rien.
*/

void			ft_cpysplit(char **split, char const *str, char sep)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (split == NULL)
		return ;
	while (*(str + i))
	{
		j = 0;
		while (*(str + i + j) && *(str + i + j) != sep)
		{
			*((*(split + k)) + j) = *(str + i + j);
			j++;
		}
		*((*(split + k)) + j) = '\0';
		k++;
		i = i + j + 1;
	}
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		*tab;
	char	**split;

	i = -1;
	if (!(split = (char**)malloc(sizeof(char*) * ft_lensplit(s, c))))
		return (NULL);
	*(split + ft_lensplit(s, c)) = NULL;
	tab = ft_lenstr(s, c);
	while (++i < ft_lensplit(s, c))
		if (!((*(split + i) = (char*)malloc(sizeof(char) * *(tab + i)))))
		{
			while (i >= 0)
			{
				free(split + i);
				i--;
			}
			free(split);
			free(tab);
			return (NULL);
		}
	ft_cpysplit(split, s, c);
	free(tab);
	i = 0;
	return (split);
}
