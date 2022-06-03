/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:57:13 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 13:57:21 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.*/

#include"libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	else
		return (0);
}
