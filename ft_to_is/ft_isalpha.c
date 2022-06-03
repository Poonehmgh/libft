/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:38:15 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 13:56:30 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* he isalpha() function tests for any character for which isupper(3) or islower(3) is true.  
The value of the argument must be representable as an unsigned char or the value of EOF.
returns zero if the character tests false and returns non-zero if the character tests true.*/

#include"libft.h"

int	ft_isalpha(int a)
{
	if ((a <= 90 && a >= 65) || (a >= 97 && a <= 122))
		return (1);
	else
		return (0);
}
