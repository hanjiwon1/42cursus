/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 00:02:57 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/13 22:28:59 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_temp;
	unsigned char	*src_temp;
	size_t			idx;

	if (n == 0 || dest == src)
		return (dest);
	idx = -1;
	src_temp = (unsigned char *)src;
	dest_temp = (unsigned char *)dest;
	if (dest_temp < src_temp)
	{
		while (++idx < n)
			dest_temp[idx] = src_temp[idx];
	}
	else
	{
		while (++idx < n)
			dest_temp[n - idx - 1] = src_temp[n - idx - 1];
	}
	return (dest);
}
