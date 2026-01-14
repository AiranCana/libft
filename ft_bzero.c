/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:56:52 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/14 12:04:39 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	pos;
	char	*iter;

	iter = s;
	pos = 0;
	while ((pos++) != n)
	{
		*iter = '\0';
		++iter;
	}
	return (s);
}
