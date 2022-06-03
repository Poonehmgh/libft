/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:04:52 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:36:37 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*he tolower() function converts an upper-case letter to the corresponding lower-case letter.  The argument must be
     representable as an unsigned char or the value of EOF.*/
	 
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
