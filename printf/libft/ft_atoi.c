/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:48:09 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 15:55:00 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkblank(const char *src, int c)
{
	while (*(src + c) == '\t' || *(src + c) == '\r' || *(src + c) == '\f'
		|| *(src + c) == '\v' || *(src + c) == ' ' || *(src + c) == '\n')
	{
		c++;
	}
	return (c);
}

int	checksign(const char *src, int c, int *sign)
{
	*sign = 1;
	if (*(src + c) == '+' || *(src + c) == '-')
	{
		if (*(src + c) == '-')
			*sign *= -1;
		c++;
	}
	return (c);
}

int	ft_atoi(const char *src)
{
	long long	result;
	int			counter;
	int			sign;

	if (!src)
		return (0);
	if (ft_strlen(src) >= 18
		&& ft_strncmp(src, "9223372036854775807", 18) >= 0)
		return (-1);
	else if (ft_strlen(src) >= 19
		&& ft_strncmp(src, "-9223372036854775808", 19) > 0)
		return (0);
	result = 0;
	counter = 0;
	counter = checkblank(src, counter);
	counter = checksign(src, counter, &sign);
	while (*(src + counter) != '\0' && ft_isdigit((int)*(src + counter)))
	{
		result = (result * 10) + (long long)(*(src + counter) - '0');
		counter++;
	}
	return ((int)result * sign);
}
