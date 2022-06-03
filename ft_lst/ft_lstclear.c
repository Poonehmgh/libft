/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:51:43 by user0             #+#    #+#             */
/*   Updated: 2022/06/03 14:05:39 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*Deletes and frees the given node and every
	successor of that node, using the function ’del’
	and free(3).
	Finally, the pointer to the list must be set to
	NULL. 
	lst: The address of a pointer to a node.
	del: The address of the function used to delete
	the content of the node.*/
	
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (!del || !lst)
		return ;
	ptr = *lst;
	while (ptr)
	{
		ptr = (ptr)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = ptr;
	}
}
