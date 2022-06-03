/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:09:23 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:20:51 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The
     terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the
     terminating `\0'.
	 The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not
     appear in the string.*/
	 
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*p;

	i = 0;
	while ((unsigned char)s[i] != (unsigned char)c && s[i] != '\0')
		i++;
	if ((unsigned char)s[i] == (unsigned char)c)
	{
		p = &s[i];
		return ((char *)p);
	}
	else
		return (0);
}
