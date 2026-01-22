/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:21:45 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/22 10:59:16 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*sol;
	char		*dest;
	size_t		limit;

	sol = src;
	dest = dst;
	limit = ft_strlen(dst);
	if (size <= limit)
		return (size + ft_strlen(src));
	while (*dest)
	{
		++dest;
		--size;
	}
	while (*src && (size - 1))
	{
		*(dest++) = *(src++);
		--size;
	}
	*dest = '\0';
	return (limit + ft_strlen(sol));
}
