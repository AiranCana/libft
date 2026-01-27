/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:33:04 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/27 11:45:15 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_str_ptr(void *str)
{
	free(*((void **)str));
}

static void	clean(t_list *lst, void (*del)(void *))
{
	if (lst -> next)
		clean(lst -> next, del);
	if (lst -> content)
	{
		del(lst -> content);
	}
	free(lst -> next);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst) && ((*lst)-> content || (*lst)->next))
		clean(*lst, del);
	*lst = NULL;
}

int	main(int argc, char const *argv[])
{
	t_list	*s;
	t_list	*d;

	s->content = "HOLA";
	d->content = "ADIOS";
	s->next = d;
	ft_lstclear(&s, free_str_ptr);
	return (0);
}
