/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:03:09 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:18:56 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*Outputs the string ’s’ to the given file
	descriptor. 
	s: The string to output.
	fd: The file descriptor on which to write. */
	
#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
