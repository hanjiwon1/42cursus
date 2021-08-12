/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:54:14 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 15:20:46 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	counter;

	if (dest == 0 && src == 0)
		return (0);
	counter = 0;
	while (counter < n)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		counter++;
	}
	return (dest - counter);
}
