/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:22:30 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:26:36 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Allocates (with malloc(3)) and returns a new
	string, which is the result of the concatenation
	of ’s1’ and ’s2’.
	s1: The prefix string.
	s2: The suffix string.
	Return value The new string.
	NULL if the allocation fails. */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst == NULL)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j])
	{		
		dst[i] = s2 [j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
