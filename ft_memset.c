/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:15:43 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/14 12:01:36 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	pos;
	char	*iter;

	iter = s;
	pos = 0;
	while ((pos++) != n)
	{
		*iter = c;
		++iter;
	}
	return (s);
}
