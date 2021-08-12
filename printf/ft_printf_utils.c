/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:16:17 by sbaek             #+#    #+#             */
/*   Updated: 2021/08/12 04:35:08 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putstring(char *c, int precision)
{
	unsigned int	counter;

	if (c == 0)
		return (ft_putstring("(null)", 0));
	else if ((precision == -1 && *c == '0'))
		return (0);
	counter = 0;
	if (*c == '-' && ++counter != 0)
	{
		ft_putchar_fd(*c++, 1);
		if (precision != 0)
			precision++;
	}
	while (precision-- > 0)
	{
		ft_putchar_fd('0', 1);
		counter++;
	}
	while (*c != '\0')
	{
		ft_putchar_fd(*c, 1);
		counter++;
		c++;
	}
	return (counter);
}

unsigned int	ft_putptr(long long c)
{
	unsigned long long	temp;
	unsigned int		counter;

	if (c < 0)
		temp = 0llu + c;
	else
		temp = c;
	counter = 0;
	counter += ft_putstring("0x", 0);
	counter += put_deximal(1, 'x', temp, 0);
	return (counter);
}

unsigned int	put_digit(int printflag, long long c, int precision)
{
	unsigned int	counter;

	counter = 0;
	if (precision == -1 && c == 0)
		return (0);
	else if (precision > 0)
	{
		while (precision-- > 0)
		{
			ft_putchar_fd('0', 1);
			counter++;
		}
	}
	if (c / 10 != 0)
		counter += put_digit(printflag, c / 10, precision);
	if (printflag == 1)
		ft_putchar_fd("0123456789"[c % 10], 1);
	counter++;
	return (counter);
}

unsigned int	put_deximal(int flag, char x, unsigned long long c, int preci)
{
	unsigned int	counter;

	counter = 0;
	if (preci == -1 && c == 0)
		return (0);
	if (c / 16 != 0)
		counter += put_deximal(flag, x, c / 16, preci);
	if (x == 'x' && flag == 1)
		ft_putchar_fd("0123456789abcdef"[c % 16], 1);
	else if (x == 'X' && flag == 1)
		ft_putchar_fd("0123456789ABCDEF"[c % 16], 1);
	counter++;
	return (counter);
}
