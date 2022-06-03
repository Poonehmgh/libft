/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:18:04 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:33:11 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Allocates (with malloc(3)) and returns a substring
	from the string ’s’.
	The substring begins at index ’start’ and is of
	maximum size ’len’.
	s: The string from which to create the substring.
	start: The start index of the substring in the
	string ’s’.
	len: The maximum length of the substring.
	Return value The substring.
	NULL if the allocation fails. */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		dst = malloc(1 * sizeof(char));
		if (!dst)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	i = 0;
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	while (i < (unsigned int)len && s[i + start])
	{
		dst[i] = s[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
