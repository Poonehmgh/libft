/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:28:17 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:12:25 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*The memcmp() function compares byte string s1 against byte string s2.  
	Both strings are assumed to be n bytes long.
	The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the
     first two differing bytes (treated as unsigned char values, so that `\200' is greater than `\0', for example).
     Zero-length strings are always identical.  This behavior is not required by C and portable code should only depend
     on the sign of the returned value.*/
	 
#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*caststr1;
	unsigned char	*caststr2;
	int				diff;
	size_t			i;

	i = 0;
	caststr1 = (unsigned char *)str1;
	caststr2 = (unsigned char *)str2;
	while (i < n)
	{
		diff = caststr1[i] - caststr2[i];
		if (caststr1[i] != caststr2[i])
			return (diff);
		i++;
	}
	return (0);
}
