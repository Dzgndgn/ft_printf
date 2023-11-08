/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:35:14 by ddogan            #+#    #+#             */
/*   Updated: 2023/11/01 20:39:00 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_control(va_list arg, const char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = i + ft_putchar(va_arg (arg, int));
	else if (c == 's')
		i = i + ft_putstr(va_arg (arg, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr (va_arg(arg, int), &i);
	else if (c == 'p')
	{
		i += write (1, "0x", 2);
		ft_pointer(va_arg(arg, unsigned long), &i);
	}
	else if (c == 'u')
		ft_unsigned(va_arg(arg, unsigned int), &i);
	else if (c == 'x')
		ft_lower_hex (va_arg(arg, int), &i);
	else if (c == 'X')
		ft_upper_hex (va_arg(arg, int), &i);
	else if (c == '%')
		i += ft_putchar('%');
	else
		i += ft_putchar(c);
	return (i);
}

int	ft_checkspace(const char *s, int *i)
{
	int	a;

	a = *i;
	if (s[a] == 32)
	{
		ft_putchar(s[a]);
		while (s[a] == 32)
		{
			a++;
		}
		*i = a;
		return (1);
	}
	return (0);
}

int	ft_printf( const char *s, ...)
{
	int		i;
	int		length;
	va_list	ag;

	i = 0;
	length = 0;
	va_start (ag, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			length += ft_checkspace(s, &i);
			length += ft_control (ag, s[i++]);
		}
		else
		{
			length += ft_putchar (s[i]);
			i++;
		}
	}
	va_end (ag);
	return (length);
}
