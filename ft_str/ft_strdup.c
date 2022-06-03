/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:33:55 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:21:53 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer
     to it.  The pointer may subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
	 */
	
#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;
	int		len;

	len = ft_strlen(s);
	dst = (char *)malloc(len + 1);
	i = 0;
	if (!dst)
		return (NULL);
	while (s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
