/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:20:06 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/18 15:00:13 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*src_temp;
	unsigned char	*dest_temp;
	size_t			idx;

	idx = 0;
	src_temp = (unsigned char *)src;
	dest_temp = (unsigned char *)dest;
	while (idx < n)
	{
		if (src_temp[idx] == (unsigned char)c)
		{
			dest_temp[idx] = (unsigned char)c;
			return (&dest[idx + 1]);
		}
		dest_temp[idx] = src_temp[idx];
		idx++;
	}
	return (NULL);
}
