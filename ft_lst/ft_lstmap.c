/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:38:42 by user0             #+#    #+#             */
/*   Updated: 2022/06/03 14:09:02 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Iterates the list ’lst’ and applies the function
	’f’ on the content of each node. Creates a new
	list resulting of the successive applications of
	the function ’f’. The ’del’ function is used to
	delete the content of a node if needed.
	lst: The address of a pointer to a node.
	f: The address of the function used to iterate on
	the list.
	del: The address of the function used to delete
	the content of a node if needed.
	Return value The new list.
	NULL if the allocation fails.*/

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*newlist;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	if (!newlist)
		return (NULL);
	head = newlist;
	while (lst->next != NULL)
	{
		lst = lst->next;
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&newlist, newnode);
	}
	return (head);
}
