/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:08:54 by user0             #+#    #+#             */
/*   Updated: 2022/06/03 14:03:57 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*Adds the node ’new’ at the end of the list.
	lst: The address of a pointer to the first link of
	a list.
	new: The address of a pointer to the node to be
	added to the list. */
	
#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{	
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
