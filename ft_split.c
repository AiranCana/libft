/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:59:55 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/26 14:33:21 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	sol[0][len +1] = NULL;
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
