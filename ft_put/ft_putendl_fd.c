/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:30:34 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:17:49 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Outputs the string ’s’ to the given file descriptor
	followed by a newline. s: The string to output.
	fd: The file descriptor on which to write. */
	
#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned char	c;

	c = '\n';
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, &c, 1);
}
