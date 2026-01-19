/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:05:07 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/19 10:33:48 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (*s1 && *s2 && n >= count)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
		++count;
	}
	return (*s1 - *s2);
}
