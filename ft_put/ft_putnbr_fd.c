/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:34:33 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:18:22 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*Outputs the integer ānā to the given file
	descriptor. n: The integer to output.
	fd: The file descriptor on which to write.*/
	
#include"libft.h"

void	ft_putnbr_fd(int m, int fd)
{
	if (m == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (m < 0)
	{
		m = -m;
		ft_putchar_fd('-', fd);
	}
	if (m / 10)
	{
		ft_putnbr_fd(m / 10, fd);
	}
	ft_putchar_fd((m % 10) + 48, fd);
}
