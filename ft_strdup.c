/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:48:08 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/20 10:01:52 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	void	*alloc;
	char	*dest;

	len = 0;
	alloc = malloc(sizeof (char) * n);
	dest = alloc;
	while (*s && n > len)
	{
		*dest = *s;
		++dest;
		++s;
	}
	*dest = *s;
	return (alloc);
}
