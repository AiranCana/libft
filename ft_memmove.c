/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:06:07 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/14 14:15:28 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*des;
	char	*sr;
	char	*sub;

	sub = ft_substr(src, 0, n);
	sr = src;
	des = dest;
	count = 0;
	while (count != n)
	{
		des[count] = sub[count];
		++count;
	}
	return (dest);
}
