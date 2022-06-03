/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:57:14 by user0             #+#    #+#             */
/*   Updated: 2022/06/03 14:08:09 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Returns the last node of the list. lst: The beginning of the list.
	Return value Last node of the list*/
	
#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (0);
	while (lst)
	{
		ptr = lst;
		lst = lst->next;
	}
	return (ptr);
}
