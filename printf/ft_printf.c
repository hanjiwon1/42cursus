/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:13:31 by sbaek             #+#    #+#             */
/*   Updated: 2021/08/12 04:42:25 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prespace(const char *c, va_list input, int *precision)
{
	int		counter;
	char	*temp;
	va_list	copiedlist;

	counter = 0;
	va_copy(copiedlist, input);
	if (*c == 'd' || *c == 'i')
	{
		temp = ft_itoa(va_arg(copiedlist, int));
		while (*(temp + counter) != '\0')
			counter++;
		free(temp);
	}
	else if (*c == 'u')
		counter = put_digit(0, va_arg(copiedlist, unsigned int), 0);
	else if (*c == 'x' || *c == 'X')
		counter = put_deximal(0, *c, va_arg(copiedlist, unsigned int), 0);
	va_end(copiedlist);
	if (*precision > counter)
	{
		*precision -= counter;
		return (*precision);
	}
	return (0);
}

unsigned int	checkflag(const char *c, va_list input, int precision)
{
	unsigned int	counter;
	char			*temp;

	counter = 0;
	if (precision != 0)
		counter = prespace(c, input, &precision);
	if (*c == 'c')
		ft_putchar_fd(va_arg(input, int), ++counter);
	else if (*c == 's')
		counter = ft_putstring(va_arg(input, char *), 0);
	else if (*c == 'p')
		counter = ft_putptr(va_arg(input, long long));
	else if (*c == 'd' || *c == 'i')
	{
		temp = ft_itoa(va_arg(input, int));
		counter = ft_putstring(temp, precision);
		free(temp);
	}
	else if (*c == 'u')
		counter = put_digit(1, va_arg(input, unsigned int), precision);
	else if (*c == 'x' || *c == 'X')
		counter = put_deximal(1, *c, va_arg(input, unsigned int), precision);
	else if (*c == '%')
		counter = ft_putstring("%", 0);
	return (precision + counter);
}

int	ft_printf(const char *c, ...)
{
	unsigned int	counter;
	int				precision;
	va_list			input;

	va_start(input, c);
	counter = 0;
	precision = 0;
	while (*c != '\0')
	{
		if (*c != '%' && ++counter != 0)
			ft_putchar_fd(*c++, 1);
		else
		{
			if (*++c == '.')
			{
				if (!ft_isdigit(*++c))
					precision = -1;
				while (ft_isdigit(*c))
					precision = precision * 10 + (*(c++) - '0');
			}
			counter += checkflag(c++, input, precision);
		}
	}
	va_end(input);
	return (counter);
}
