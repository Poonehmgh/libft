/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:11:44 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:01:01 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*The isprint() function tests for any printing character, including space (` ').  The value of the argument must be representable as an unsigned char or the value of EOF.*/
	
#include"libft.h"

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	return (0);
}
