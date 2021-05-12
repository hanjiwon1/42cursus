/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 00:02:57 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/12 21:58:33 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_temp;
	const char	*src_temp;
	size_t		idx;

	src_temp = src;
	dest_temp = dest;
	if (dest <= src)
	{
		ft_memcpy(dest_temp, src_temp, n);
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
