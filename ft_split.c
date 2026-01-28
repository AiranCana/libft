/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:59:55 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/28 16:03:10 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	**section(char const *s, char c, char **save)
{
	int		i;
	int		len;
	int		j;
	char	*sub;

	len = 0;
	j = 0;
	i = 0;
	while (save[j])
	{
		i = 0;
		while (!s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		sub = ft_substr(s, 0, len - 1);
		if (!sub)
		{
			i = 0;
			while (save[i])
				free(save[i++]);
			free(save);
			return (NULL);
		}
		while (s && s[i] == c)
			i++;
		s = &s[i];
		save[j] = sub;
		j++;
	}
	return (save);
}*/

static int	sclen(char const *s, char c)
{
	size_t		count;
	int			i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
			if (!s[i])
				return (-1);
		}
		if (s[i] == c)
		{
			++count;
			while (s[i] && s[i] == c)
				i++;
			if (!s[i])
				--count;
		}
		++i;
	}
	return (count);
}

static char	**autocoplet(char **sol, int len)
{
	char	**save;
	int		count;

	count = 0;
	save = sol;
	while ((count++) < len)
	{
		*(save) = "a";
		++save;
	}
	save = sol;
	save[len] = NULL;
	return (save);
}

//{NULL, NULL, NULL, NULL}

char	**ft_split(char const *s, char c)
{
	char		**save;
	char		**sol;
	//char		**strsub;
	int			len;

	if (!s)
		return (malloc(sizeof (char *)));
	len = sclen(s, c);
	if (len == -1)
		return (malloc(sizeof (char *)));
	sol = malloc(sizeof (char *) * (len + 2));
	if (!sol)
		return (NULL);
	save = autocoplet(sol, len + 1);
	//strsub = section(s, c, save);
	//if (!strsub)
		//return (NULL);
	return (sol);
}
//ft_split("       ", ' ');

/*
int	main(void)
{
	char	**hola;

	hola = ft_split("hola como estas", ' ');
	while (*hola)
	{
		printf("\n%s", *hola);
		free(*hola);
		hola++;
	}
	free(hola);
	return (0);
}
*/
/*
static char	*section(char **s, char c)
{
	char	*str;
	char	*sol;
	char	*save;
	int		len;

	len = 1;
	str = *s;
	while (*str && *str != c)
	{
		++len;
		++str;
	}
	sol = malloc(sizeof (char) * (len));
	if (!sol)
		return (NULL);
	sol = ft_memset(sol, 'a', (size_t) len);
	sol[len - 1] = '\0';
	save = sol;
	while (*save)
		*(save++) = (*(*s)++);
	(*s)++;
	return (sol);
}

static size_t	sclen(char const *s, char c)
{
	size_t		count;
	size_t		counts;

	count = 0;
	counts = 0;
	while (s[counts])
	{
		if (*s == c)
			++count;
		++counts;
	}
	if (ft_strlen(s) == count)
		return (-2);
	return (count);
}

static char	**autocoplet(char ***sol, int len)
{
	char	**save;
	int		count;

	count = 0;
	save = sol[0];
	while ((count++) < len)
	{
		*(save) = "a";
		++save;
	}
	save = sol[0];
	save[len] = NULL;
	return (save);
}

static void	liverity(char ***sol)
{
	while (*sol[0])
	{
		free(*sol[0]);
		++sol;
	}
	free(sol[0]);
}

char	**ft_split(char const *s, char c)
{
	char		**save;
	char		**sol;
	char		*strsub;
	char		*str;
	size_t		len;

	len = sclen(s, c);
	sol = malloc(sizeof (char *) * (len + 2));
	if (!sol)
		return (NULL);
	save = autocoplet(&sol, len);
	while (*save)
	{
		strsub = section(&str, c);
		if (!strsub)
		{
			liverity(&save);
			return (NULL);
		}
		*save = strsub;
		++save;
	}
	return (sol);
}
*/