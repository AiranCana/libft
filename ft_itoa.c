/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 09:17:36 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/26 12:44:42 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// 1 2 3 4 \0

static int	numlen(long n)
{
	int	d;

	if (n < 0)
	{
		d = 2;
		n = -n;
	}
	else
		d = 1;
	while (n > 9)
	{
		n /= 10;
		++d;
	}
	++d;
	return (d);
}

static void	numins(long temp, char *dst, int len)
{
	char	c;

	if (temp >= 10)
		numins((temp / 10), dst - 1, len - 1);
	c = 48 + (temp % 10);
	dst[0] = c;
}

char	*ft_itoa(int n)
{
	char	*dst;
	long	num;
	int		len;

	num = n;
	len = numlen(num);
	dst = malloc(sizeof (char) * len);
	if (!dst)
		return (NULL);
	dst[len - 1] = '\0';
	if (num < 0)
	{
		dst[0] = '-';
		num = -num;
	}
	numins(num, &dst[len - 2], len - 2);
	return (dst);
}
