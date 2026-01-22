/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:06:07 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/22 11:57:50 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	operation(unsigned char **d, unsigned char *s, size_t n, size_t p)
{
	if (d[0] < s)
	{
		while (p < n)
		{
			d[0][p] = s[p];
			++p;
		}
	}
	else
	{
		while (n > 0)
		{
			d[0][n - 1] = s[n - 1];
			--n;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			pos;
	unsigned char	*dst;
	unsigned char	*str;

	str = (unsigned char *) src;
	dst = (unsigned char *) dest;
	pos = 0;
	if (!dest && !src)
		return (dest);
	operation(&dst, str, n, pos);
	return (dest);
}
