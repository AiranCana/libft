/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:48:08 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/21 12:04:13 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	void	*alloc;
	char	*dest;
	size_t	len;

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
