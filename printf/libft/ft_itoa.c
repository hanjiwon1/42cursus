/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:49:23 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/08 02:38:24 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	digitcount(int *n, int *digit, int *sign)
{
	int		temp;

	*digit = 0;
	if (*n == 0)
		*digit = 1;
	*sign = 1;
	if (*n < 0)
	{
		*sign = -1;
		*n *= -1;
	}
	temp = *n;
	while (temp != 0)
	{
		temp = temp / 10;
		*digit = *digit + 1;
	}
	if (*sign == -1)
		*digit = *digit + 1;
}

char	*min_check(long long n)
{
	char	*temp;

	temp = 0;
	if (n == -2147483648)
	{
		temp = (char *)malloc(12);
		if (!temp)
			return (0);
		temp = ft_memcpy(temp, "-2147483648\0", 12);
	}
	return (temp);
}

char	*ft_itoa(int n)
{
	char	*temp;
	int		length;
	int		sign;

	temp = min_check(n);
	if (n == -2147483648LL)
		return (temp);
	digitcount(&n, &length, &sign);
	temp = (char *)malloc(sizeof(char) * length + 1);
	if (!temp)
		return (0);
	*(temp + length) = '\0';
	length--;
	while (length > 0)
	{
		*(temp + length) = (n % 10) + '0';
		n /= 10;
		length--;
	}
	if (sign == -1)
		*temp = '-';
	else
		*temp = (n % 10) + '0';
	return (temp);
}
