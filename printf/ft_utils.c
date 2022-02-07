/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:20:52 by jiwhan            #+#    #+#             */
/*   Updated: 2022/02/07 17:27:18 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_print_str(char *s)
{
	unsigned int	result;

	if (s == 0)
	{
		return (ft_print_str("(null)"));
	}
	else
	{
		ft_putstr_fd(s, 1);
	}
	result = (unsigned int)ft_strlen(s);
	return (result);
}

unsigned int	ft_print_ptr(long long p)
{
	unsigned int		result;
	unsigned long long	temp;

	temp = p;
	if (p < 0)
		temp = 0llu + p;
	ft_putstr_fd("0x", 1);
	result = 2 + ft_print_dex(temp, 'x');
	return (result);
}

unsigned int	ft_print_integer(int num)
{
	unsigned int	result;
	char			*temp;

	temp = ft_itoa(num);
	result = ft_print_str(temp);
	free(temp);
	return (result);
}

unsigned int	ft_print_unsigned_integer(unsigned int num)
{
	unsigned int	result;

	result = 0;
	if (num >= 10)
		result = ft_print_unsigned_integer(num / 10);
	result++;
	ft_putchar_fd("0123456789"[num % 10], 1);
	return (result);
}

unsigned int	ft_print_dex(unsigned long long num, char x)
{
	unsigned int	result;

	result = 0;
	if (num >= 16)
		result += ft_print_dex(num / 16, x);
	if (x == 'X')
		ft_putchar_fd("0123456789ABCDEF"[num % 16], 1);
	else
		ft_putchar_fd("0123456789abcdef"[num % 16], 1);
	result++;
	return (result);
}
