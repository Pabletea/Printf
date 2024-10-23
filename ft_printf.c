/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:06:51 by pabalons          #+#    #+#             */
/*   Updated: 2024/10/23 13:07:07 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_value(va_list args, const char *str);
int	ft_printf_char(char c);
int	ft_printf_str(char *str);
int	ft_printf_int(int i);
int	ft_printf_unsigned_int(unsigned int n);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	count = print_value(args, format);
	va_end(args);
	return (count);
}

int	print_value(va_list args, const char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				count += ft_printf_char('%');
			else if (*str == 'c')
				count += ft_printf_char(va_arg(args, int));
			else if (*str == 's')
				count += ft_printf_str(va_arg(args, char *));
			else if (*str == 'd' || *str == 'i')
				count += ft_printf_int(va_arg(args, int));
			else if (*str == 'x')
				count += ft_print_hex_lower(va_arg(args, unsigned int));
			else if (*str == 'X')
				count += ft_print_hex_upper(va_arg(args, unsigned int));
		}
		else
			count += ft_printf_char(*str);
		str++;
	}
	return (count);
}
