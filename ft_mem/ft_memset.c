/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:18:45 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:16:13 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
	The memset() function returns its first argument.*/
	
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*caststr;

	caststr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		caststr[i] = c;
		i++;
	}
	return (str);
}
