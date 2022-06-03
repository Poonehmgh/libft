/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:41:00 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:14:36 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is
     always done in a non-destructive manner.
	 The memmove() function returns the original value of dst.*/

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*castd;
	unsigned char	*casts;

	castd = (unsigned char *)dst;
	casts = (unsigned char *)src;
	if (len == 0 || (!castd && !casts))
		return (dst);
	if (dst < src)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len--)
		{
			castd[len] = casts[len];
		}
	}
	return (dst);
}
