/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:48:08 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/19 16:20:00 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	void	*alloc;
	char	*dest;

	len = ft_strlen(s) + 1;
	alloc = malloc(sizeof (char) * len);
	dest = alloc;
	while (*s)
	{
		*dest = *s;
		++dest;
		++s;
	}
	*dest = *s;
	return (alloc);
}
