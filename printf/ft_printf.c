/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:44:05 by jiwhan            #+#    #+#             */
/*   Updated: 2022/02/07 19:40:41 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	check_format(const char *format, va_list ap)
{
	unsigned int	result;

	result = 0;
	if (*format == 'c')
		ft_putchar_fd(va_arg(ap, int), ++result);
	else if (*format == 's')
		result = ft_print_str(va_arg(ap, char *));
	else if (*format == 'p')
		result = ft_print_ptr(va_arg(ap, long long));
	else if (*format == 'd' || *format == 'i')
		result = ft_print_integer(va_arg(ap, int));
	else if (*format == 'u')
		result = ft_print_unsigned_integer(va_arg(ap, unsigned int));
	else if (*format == 'x' || *format == 'X')
		result = ft_print_dex(va_arg(ap, unsigned int), *format);
	else if (*format == '%')
		ft_putchar_fd('%', ++result);
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list			ap;
	unsigned int	result;

	va_start(ap, format);
	result = 0;
	while (*format)
	{
		if (*format != '%' && ++result != 0)
			ft_putchar_fd(*format, 1);
		else
			result += check_format(++format, ap);
		format++;
	}
	va_end(ap);
	return (result);
}
