/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:34:17 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:04:47 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Adds the node ’new’ at the beginning of the list.
	lst: The address of a pointer to the first link of
	a list.
	new: The address of a pointer to the node to be
	added to the list. */
	
#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	(*new).next = *lst;
	*lst = new;
}
