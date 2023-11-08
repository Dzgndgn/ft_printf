/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:33:30 by ddogan            #+#    #+#             */
/*   Updated: 2023/11/01 20:31:08 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lower_hex(unsigned int num, int *i)
{
	char	*ptr;

	ptr = "0123456789abcdef";
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
		*i = *i + 1;
	}
	if (num >= 16)
	{
		ft_lower_hex(num / 16, i);
		ft_lower_hex(num % 16, i);
	}
	if (num >= 0 && num < 16)
	{
		*i += ft_putchar(ptr[num]);
	}
}
