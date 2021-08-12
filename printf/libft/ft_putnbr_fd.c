/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 22:17:43 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 14:25:31 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putnumcircle(int n, int fd)
{
	char	temp;

	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	temp = n % 10 + '0';
	if (n / 10 != 0)
		putnumcircle(n / 10, fd);
	write(fd, &temp, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
		putnumcircle(n, fd);
}
