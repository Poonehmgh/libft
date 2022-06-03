/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:16:40 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:09:51 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Allocates (with malloc(3)) and returns a new node.
	The member variable ’content’ is initialized with
	the value of the parameter ’content’. The variable
	’next’ is initialized to NULL.
	content: The content to create the node with.
	Return value The new node */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	(*ptr).content = content;
	(*ptr).next = NULL;
	return (ptr);
}
