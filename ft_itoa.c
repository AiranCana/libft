/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 09:17:36 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/20 11:29:18 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	d;
	int	temp;

	d = 0;
	temp = n;
	if (n < 0)
	{
		d = 2;
		temp = -temp;
	}
	else
		d = 1;
	while (temp > 9)
	{
		temp /= 10;
		++d;
	}
	++d;
	return (d);
}

static void	numins(int temp, char *dst, int len)
{
	if (temp > 10)
		numins((temp / 10), dst, len -1);
	dst[len] = 48 + (temp % 10);
}

char	*ft_itoa(int n)
{
	char	*dst;
	char	*opp;
	int		len;

	len = numlen(n);
	dst = malloc(sizeof (char) * len);
	if (!dst)
		return (NULL);
	dst[len - 1] = '\0';
	opp = dst;
	if (n < 0)
	{
		*(opp++) = '-';
		n = -n;
	}
	while (*opp)
		++opp;
	--opp;
	numins(n, opp, len - 2);
	return (dst);
}
