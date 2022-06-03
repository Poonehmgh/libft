/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:23:07 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:29:55 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* The strcmp() and strncmp() functions lexicographically compare the null-terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings
     rather than binary data, characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the
     string s1 is greater than, equal to, or less than the string s2.  The comparison is done using unsigned characters,
     so that `\200' is greater than `\0'.*/
	
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}		
		i++;
	}
	return (0);
}
