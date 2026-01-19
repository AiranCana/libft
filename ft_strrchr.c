/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:15:45 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/19 09:58:18 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*g;

	g = s;
	while (*g)
		++g;
	while (g != s)
	{
		if (*g == c)
			return ((char *) g);
		--g;
	}
	return (NULL);
}
