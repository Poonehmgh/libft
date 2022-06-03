/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:20:56 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:29:23 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Applies the function ’f’ to each character of the
	string ’s’, and passing its index as first argument
	to create a new string (with malloc(3)) resulting
	from successive applications of ’f’.
	s: The string on which to iterate.
	f: The function to apply to each character.
	Return value The string created from the successive applications
	of ’f’.
	Returns NULL if the allocation fails.*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	i;

	if (!f || !s)
		return (NULL);
	i = 0;
	dst = malloc(sizeof(s[0]) * (ft_strlen(s) + 1));
	if (!dst)
		return (NULL);
	while (s[i] != '\0')
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
