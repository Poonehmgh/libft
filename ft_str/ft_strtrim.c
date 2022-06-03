/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:57:27 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:32:34 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*Allocates (with malloc(3)) and returns a copy of
	’s1’ with the characters specified in ’set’ removed
	from the beginning and the end of the string.
	s1: The string to be trimmed.
	set: The reference set of characters to trim.
	Return value The trimmed string.
	NULL if the allocation fails.*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1 + i);
	while (len != 0 && ft_strchr(set, s1[i + len]))
		len--;
	str = ft_substr(s1, i, len + 1);
	if (!str)
		return (NULL);
	return (str);
}
