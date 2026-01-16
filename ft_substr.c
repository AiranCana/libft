/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:29:30 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/16 11:47:44 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*leter;
	size_t	count;

	count = 0;
	leter = malloc(sizeof (char) * len);
	if (!leter)
		return (NULL);
	s += start;
	while (count++ != len)
	{
		*leter = *s;
		++leter;
		++s;
	}
	*leter = '\0';
	return (leter);
}
