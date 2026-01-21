/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 10:31:18 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/21 10:48:14 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	pos;
	char			*mod;

	mod = malloc(sizeof(char) * (ft_strlen(s) + 1));
	pos = 0;
	while (s[pos])
	{
		mod[pos] = f(pos, s[pos]);
		++pos;
	}
	mod[pos] = '\0';
	return (mod);
}
