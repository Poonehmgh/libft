/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:10:37 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:00:09 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* The isdigit() function tests for a decimal digit character.  Regardless of locale, this includes the following characters only:

     ``0''         ``1''         ``2''         ``3''         ``4''
     ``5''         ``6''         ``7''         ``8''         ``9''

     The isnumber() function behaves similarly to isdigit(), but may recognize additional characters, depending on the current locale setting.

     The value of the argument must be representable as an unsigned char or the value of EOF. */

#include"libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9' )
		return (1);
	return (0);
}
