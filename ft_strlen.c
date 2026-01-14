/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:35:43 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/14 10:40:32 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *line)
{
	size_t	longi;

	longi = 0;
	while (*(line++))
	{
		++longi;
	}
	return (longi);
}
