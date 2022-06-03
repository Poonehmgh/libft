/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:51:33 by user0             #+#    #+#             */
/*   Updated: 2022/06/03 14:10:36 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Counts the number of nodes in a list.
	lst: The beginning of the list.
	Return value The length of the list*/

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
