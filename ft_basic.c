/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:57:50 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/28 15:33:11 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (ptr[i])
	{
		write (1, &ptr[i], 1);
		i++;
	}
	return (i);
}

void	*ft_putnbr(int num, int *i)
{
	char	a;

	a = num + '0';
	if (num == -2147483648)
	{
		write (1, "-2147483648", 11);
		*i = 11;
		return (0);
	}
	if (num < 0)
	{
		write (1, "-", 1);
		*i = *i + 1;
		num *= -1;
	}
	if (num <= 9)
		*i = *i + ft_putchar(num + '0');
	if (num > 9)
	{
		ft_putnbr(num / 10, i);
		ft_putnbr(num % 10, i);
	}
	return (0);
}
