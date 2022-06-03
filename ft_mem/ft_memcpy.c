/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:04:12 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:14:06 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*  The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is
     undefined.  Applications in which dst and src might overlap should use memmove(3) instead.
	 The memcpy() function returns the original value of dst.*/
	 
#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*castd;
	char	*casts;

	castd = (char *)dst;
	casts = (char *)src;
	if (n == 0 || (!castd && !casts))
		return (dst);
	i = 0;
	while (i < n)
	{
		castd[i] = casts[i];
		i++;
	}
	return (dst);
}
