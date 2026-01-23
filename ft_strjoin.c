/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:48:11 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/23 11:44:50 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*allo;
	char	*sol;

	allo = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	sol = allo;
	if (!allo)
		return (NULL);
	while (*s1)
		*allo++ = *s1++;
	while (*s2)
		*allo++ = *s2++;
	*allo = *s2;
	return (sol);
}
