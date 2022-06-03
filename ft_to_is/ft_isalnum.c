/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:31:08 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 13:55:41 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.  
	The value of the argument must be representable as an unsigned char or the value of EOF.
	The isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.*/

#include"libft.h"

int	ft_isalnum(int a)
{
	if (a <= '9' && a >= '0')
		return (1);
	if ((a <= 90 && a >= 65) || (a >= 97 && a <= 122))
		return (1);
	else
		return (0);
}
