/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:37:07 by ddogan            #+#    #+#             */
/*   Updated: 2023/11/01 20:39:51 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_control(va_list arg, const char c);
int		ft_checkspace(const char *s, int *i);
void	ft_lower_hex(unsigned int num, int *i);
void	*ft_putnbr(int num, int *i);
int		ft_putstr(char *ptr);
int		ft_putchar(int c);
void	ft_unsigned(unsigned int num, int *i);
void	ft_upper_hex(unsigned int num, int *i);
int		ft_printf( const char *s, ...);
void	ft_pointer(unsigned long num, int *i);

#endif