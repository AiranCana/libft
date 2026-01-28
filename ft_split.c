/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:59:55 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/28 22:00:23 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	release(char **sol, size_t len)
{
	size_t	i;

	i = 0;
	while (len > i)
	{
		free(sol[i]);
		i++;
	}
	free(sol);
}

static void	spliter(char *str, char c, int sections, char **sol)
{
	int	i;
	int	j;

	i = 0;
	if (!(sections > 0 && *str))
		return ;
	while (sections > i)
	{
		j = 0;
		while (str[j] && str[j] != c)
			j++;
		sol[i] = ft_substr(str, 0, j);
		if (!sol[i])
		{
			release(sol, i);
			return ;
		}
		while (str[j] && str[j] == c)
			j++;
		str = &str[j];
		i++;
	}
	sol[i] = NULL;
}

static int	countleter(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			++count;
			while (s[i] && s[i] == c)
				i++;
		}
		++i;
	}
	return (++count);
}

char	**ft_split(char const *s, char c)
{
	int		sections;
	char	**sol;
	char	*str;
	char	leter[2];

	leter[0] = c;
	leter[1] = '\0';
	if (!s)
		return (malloc(sizeof (char *)));
	str = ft_strtrim(s, leter);
	if (!str)
		return (malloc(sizeof (char *)));
	sections = countleter(s, c);
	sol = ft_calloc((sections + 1), sizeof (char *));
	if (sol)
		spliter(str, c, sections, sol);
	free(str);
	return (sol);
}
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