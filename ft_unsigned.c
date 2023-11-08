/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:45:17 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/28 15:46:11 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int num, int *i)
{
	long	a;

	a = (long) num;
	if (a <= 9)
		*i = *i + ft_putchar(a + '0');
	if (a > 9)
	{
		ft_unsigned(a / 10, i);
		ft_unsigned(a % 10, i);
	}
}
