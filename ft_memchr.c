/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:31:35 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/26 09:57:49 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	leter;
	size_t			count;

	count = 0;
	leter = (unsigned char) c;
	str = (unsigned char *) s;
	while (count < n)
	{
		if (str[count] == leter)
			return (&str[count]);
		++count;
	}
	return (NULL);
}
