/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:33:22 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/27 10:23:17 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*list;

	count = 0;
	if (!lst)
		return (0);
	++count;
	list = lst;
	while (list -> next)
	{
		++count;
		list = list -> next;
	}
	return (count);
}
