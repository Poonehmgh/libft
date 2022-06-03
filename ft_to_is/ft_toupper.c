/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:02:56 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:36:30 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* The toupper() function converts a lower-case letter to the corresponding upper-case letter.  The argument must be
     representable as an unsigned char or the value of EOF.
	 If the argument is a lower-case letter, the toupper() function returns the corresponding upper-case letter if there
     is one; otherwise, the argument is returned unchanged.*/

#include"libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
