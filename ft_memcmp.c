/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:22:43 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/19 10:34:56 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		count;
	const char	*s3;
	const char	*s4;

	s3 = s1;
	s4 = s2;
	count = 0;
	while (*s3 && *s4 && n != count)
	{
		if (*s3 != *s4)
			return (*s3 - *s4);
		++s3;
		++s4;
		++count;
	}
	return (*s3 - *s4);
}
