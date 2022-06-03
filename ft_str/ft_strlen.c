/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:26:53 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:28:42 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* The strlen() function computes the length of the string s.  The strnlen() function attempts to compute the length
     of s, but never scans beyond the first maxlen bytes of s.

	RETURN VALUES
     The strlen() function returns the number of characters that precede the terminating NUL character.  The strnlen()
     function returns either the same result as strlen() or maxlen, whichever is smaller. */
	 
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
