/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:31:35 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/19 10:20:13 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*g;
	size_t		count;

	count = 0;
	g = s;
	while (*g && count != n)
	{
		if (*g == c)
			return ((void *)g);
		++g;
		++count;
	}
	return (NULL);
}
