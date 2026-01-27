/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:33:16 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/27 15:59:20 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, ((char *)elem->content), len);
	write(1, "\n", 1);
}

static void	deleted(void *delete)
{
	free(delete);
}

void	*ft_map(void *ct)
{
	int		i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}*/

static int	iscreate(t_list *lst, void *(*f)(void *), t_list *list)
{
	t_list	*aux;

	aux = NULL;
	while (lst)
	{
		aux = ft_lstnew(f(lst -> content));
		if (!aux)
			return (1);
		ft_lstadd_back(&list, aux);
		lst = lst -> next;
	}
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;

	list = NULL;
	if (!list || !f || !del)
		return (NULL);
	if (!iscreate(lst, f, list))
	{
		ft_lstclear(&list, del);
		return (NULL);
	}
	return (list);
}

/*int	main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*list;

	elem = ft_lstnew("lorem");
	elem2 = ft_lstnew("ipsum");
	elem3 = ft_lstnew("dolor");
	elem4 = ft_lstnew("sit");

	ft_lstadd_back(&elem, elem2);
	ft_lstadd_back(&elem, elem3);
	ft_lstadd_back(&elem, elem4);
	ft_print_result(elem);
	while (elem->next)
	{
		elem = elem->next;
		ft_print_result(elem);
	}
	ft_lstmap(list, &ft_map, &deleted);
	ft_print_result(list);
	while (list->next)
	{
		list = list->next;
		ft_print_result(list);
	}
	ft_lstclear(&list, &deleted);
	return (0);
}*/
