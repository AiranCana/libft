/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:43:24 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/23 10:43:42 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	temp;
	size_t	lit;

	count = 0;
	if (!*little)
		return ((char *) big);
	while (*big && len > count)
	{
		if (*big == *little)
		{
			temp = count;
			lit = 0;
			while (little[lit] && little[lit] == big[lit] && len > count++)
				++lit;
			if (!little[lit])
				return ((char *) big);
			count = temp;
		}
		++big;
		++count;
	}
	return (NULL);
}
