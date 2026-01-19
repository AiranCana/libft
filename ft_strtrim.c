/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:30:40 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/19 15:40:44 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlenlset(char const *s1, char const *set, char *dst)
{
	size_t	count;
	int		found;
	char	*allo;

	allo = dst;
	found = 0;
	count = 0;
	while (*s1)
	{
		found = 0;
		while (*set)
		{
			if (*(set++) == *s1)
				found = 1;
		}
		if (found)
		{
			if (allo != NULL)
			{
				*(allo++) = *s1;
			}
		}
		++s1;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*allo;

	len = ft_strlenlset(s1, set, NULL);
	allo = malloc(sizeof (char *) * len);
	if (!allo)
		return (NULL);
	ft_strlenlset(s1, set, allo);
	return (allo);
}
