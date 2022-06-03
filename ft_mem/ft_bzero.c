/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:20:56 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 13:52:57 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*The bzero() function writes n zeroed bytes to the string s.  
	If n is zero, bzero() does nothing.*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*cs;

	i = 0;
	cs = (char *)str;
	while (i < n)
	{
		cs[i] = 0;
		i++;
	}
}
