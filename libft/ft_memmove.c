/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 00:02:57 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/13 21:11:24 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_temp;
	unsigned char	*src_temp;
	size_t			idx;

	src_temp = (unsigned char *)src;
	dest_temp = (unsigned char *)dest;
	if (n == 0)
		return (dest);
	if (dest <= src)
	{
		while (n--)
			*(dest_temp++) = *(src_temp++);
	}
	else
	{
		idx = n - 1;
		while (idx >= 0 && src_temp[idx])
		{
			*(dest_temp + idx) = *(src_temp + idx);
			idx--;
		}
	}
	return (dest);
}
