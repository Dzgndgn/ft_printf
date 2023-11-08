/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:34:03 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/28 15:35:06 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(unsigned long num, int *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (num >= 16)
	{
		ft_pointer(num / 16, i);
		ft_pointer(num % 16, i);
	}
	if (num < 16)
	{
		*i += ft_putchar(base[num]);
	}
}
