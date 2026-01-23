/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:30:40 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/23 13:56:28 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isfound(char s, char const *set)
{
	while (*set)
	{
		if (s == *set)
			return (1);
		++set;
	}
	return (0);
}

static char	*move(char *s, char const *set)
{
	char	*save1;

	save1 = s;
	while (*save1 && isfound(*save1, set))
		++save1;
	return (save1);
}

static size_t	lenstarend(char **s1, char const *set)
{
	char	*save1;
	char	*saves1;

	save1 = s1[0];
	while (*save1 && isfound(*save1, set))
		++save1;
	saves1 = save1;
	while (*save1)
		++save1;
	if (!*save1)
		--save1;
	while (isfound(*save1, set))
	{
		*save1 = '\0';
		--save1;
	}
	return (ft_strlen(saves1));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	count;
	char	*allo;

	len = lenstarend((char **) &s1, set);
	allo = malloc(sizeof (char) * (len + 1));
	if (!allo)
		return (NULL);
	s1 = (char const *) move((char *) s1, set);
	count = 0;
	while (count < len)
	{
		allo[count] = s1[count];
		++count;
	}
	allo[count] = '\0';
	return (allo);
}
