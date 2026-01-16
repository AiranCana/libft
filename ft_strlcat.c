/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:21:45 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/16 13:32:18 by acanadil         ###   ########.fr       */
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
		--limit;
		++dest;
	}
	while (*src && limit--)
	{
		*dest = *src;
		++dest;
		++src;
	}
	return (ft_strlen(dst) + ft_strlen(sol));
}
