/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:45:49 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 13:54:23 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  
The allocated memory is filled with bytes of value zero.  If successful, calloc() return a pointer to allocated memory.  
If there is an error, it returns a NULL pointer and set errno to ENOMEM.*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*output;

	i = 0;
	output = malloc (count * size);
	if (!output)
		return (NULL);
	while (i < size * count)
	{
		output[i] = 0;
		i++;
	}
	return (output);
}
