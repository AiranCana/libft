/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:15:12 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/16 14:30:49 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	const char	*g;

	g = s;
	while (*g)
	{
		if (*g == c)
			return ((char *)g);
	}
	return (NULL);
}
