/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:29:54 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/05 05:13:25 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *src, size_t len)
{
	unsigned int	counter;

	if (src == 0)
		return (src);
	if (len <= 0)
		return (src);
	counter = 0;
	while (counter < len)
	{
		*(char *)src = 0;
		counter++;
		src++;
	}
	return (src - counter);
}
