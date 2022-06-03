/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:18:34 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:17:01 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Outputs the character ’c’ to the given file descriptor.
	c: The character to output.
	fd: The file descriptor on which to write.*/

#include"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
