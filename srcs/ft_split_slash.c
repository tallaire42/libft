#include "../includes/libft.h"

static	int		c_is_string(char c, char *str)
{
	int		i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == c)
			return (0);
		++i;
	}
	return (-1);
}

static	size_t	len_split(char *str, char *sep)
{
	size_t	size;
	int		i;

	size = 0;
	i = 0;
	while (str && str[i])
	{
		if (!c_is_string(str[i], sep))
		{
			while (str[i] && !c_is_string(str[i], sep))
				++i;
		}
		if (str[i] != '\0' && c_is_string(str[i], sep))
			++size;
		while (str[i] && c_is_string(str[i], sep))
			++i;
	}
	return (size);
}

static	char	*dup_little_string(char **split, char *str, char *sep, int k)
{
	char	*new;
	int		i;

	i = 0;
	while (str[i] && c_is_string(str[i], sep))
		++i;
	if (!(new = malloc(i + 2)))
	{
		i = 0;
		while (i < k)
			free(split[k]);
		free(split);
		return (NULL);
	}
	i = 0;
	while (str[i] && c_is_string(str[i], sep))
	{
		new[i] = str[i];
		++i;
	}
	new[i] = '/';
	new[i + 1] = '\0';
	return (new);
}

static	char	**dup_split(char **split, char *str, char *sep)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str && str[i])
	{
		if (str[i] && !c_is_string(str[i], sep))
			++i;
		else
		{
			if (!(split[k] = dup_little_string(split, str + i, sep, k)))
				return (NULL);
			++k;
			while (str[i + j] && c_is_string(str[i + j], sep))
				++j;
		}
		i = i + j;
		j = 0;
	}
	split[k] = NULL;
	return (split);
}

char			**ft_split_slash(char *str, char *sep)
{
	char	**split;
	size_t	size;
	int		i;

	i = 0;
	size = len_split(str, sep);
	if (!(split = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	while (i <= (int)size)
	{
		split[i] = NULL;
		++i;
	}
	if (size == 0)
	{
		if (!(split[0] = malloc(1)))
		{
			free(split);
			return (NULL);
		}
		return (split);
	}
	if (!(split = dup_split(split, str, sep)))
		return (NULL);
	return (split);
}
