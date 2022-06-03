/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:11:20 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:31:55 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*      The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The
     terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the
     terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

	RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not
     appear in the string. */
	
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*dst;

	i = ft_strlen((char *)s);
	dst = 0;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			dst = &s[i];
			return ((char *)dst);
		}
		i--;
	}
	return (0);
}
