/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:15:45 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/22 12:33:09 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*g;

	c %= 128;
	g = s;
	while (*g)
	{
		++g;
	}
	while (g != s)
	{
		if (*g == c)
			return ((char *) g);
		--g;
	}
	if (*g == c)
		return ((char *) g);
	return (NULL);
}
