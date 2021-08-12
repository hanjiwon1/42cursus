/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:55:32 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 16:32:22 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned int	counter;

	if (!ptr)
		return (ptr);
	if (len <= 0)
		return (ptr);
	counter = 0;
	while (counter < len)
	{
		*(char *)ptr = value;
		ptr++;
		counter++;
	}
	return (ptr - counter);
}
