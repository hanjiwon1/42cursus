/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:44:05 by jiwhan            #+#    #+#             */
/*   Updated: 2022/02/06 21:48:33 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	check_format(const char *format, va_list ap)
{
	unsigned int	cnt;
	char			temp;

	cnt = 0;
	if (*format == 'c')
		ft_putchar_fd(va_arg(ap, int), ++cnt);
	else if (*format == 's')
		cnt = ft_putstr(va_arg(ap, char *), 0);
	else if(*format == 'p')
		cnt = ft_putptr(va_arg(ap, long long));
	else if(*format == 'd' || *format == 'i')
	{
		temp = ft_itoa(va_arg(ap, int));
		cnt = ft_putstr(temp, 0);
		free(temp);
	}
	else if (*format == 'u')
		cnt = ft_putnum(1, va_arg(ap, unsigned int), 0);
	// else if (*format = 'x' || *format == 'X')
		// cnt = ft_putdex(1, )

}

/*
	printf("hihi! 내 이름은 %s야~! 나이는 %d얌", name, age);
*/

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	unsigned int		result;

	va_start(ap, format);
	result = check_format(format, ap);
	result = 0;
	while (*format)
	{
		if (*format != '%' && ++result != 0)
			ft_putchar_fd(*format++, 1);
		else
			result += format_check(format++, ap);
	}
	va_end(ap);
	return (result);
}
