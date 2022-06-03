/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:29:37 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/03 14:34:15 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* Allocates (with malloc(3)) and returns a string
	representing the integer received as an argument.
	Negative numbers must be handled.
	n: the integer to convert.
	Return value The string representing the integer.
	NULL if the allocation fails.*/

#include"libft.h"

int	digits(long n)
{
	int	i;

	i = 1;
	if (n < 0)
		i = 2;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_recursion(long m, char *dst, int *i)
{
	if (m / 10)
	{
		dst = ft_recursion(m / 10, dst, i);
	}
	dst[*i] = m % 10 + 48;
	*i = *i + 1;
	dst[*i] = '\0';
	return (dst);
}

char	*ft_itoa(int m)
{
	int		i;
	char	*dst;
	int		*ptr;
	long	m_long;

	m_long = (long)m;
	i = 0;
	ptr = &i;
	dst = malloc((digits(m_long) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	if (m_long < 0)
	{
		m_long = -m_long;
		dst[0] = '-';
		i = 1;
	}
	dst = ft_recursion(m_long, dst, ptr);
	return (dst);
}
