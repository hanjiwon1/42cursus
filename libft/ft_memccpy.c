/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:20:06 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/14 14:26:01 by jiwhan           ###   ########.fr       */
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
	while (idx < n && src_temp[idx] != c)
	{
		*dest_temp = src_temp[idx];
		idx++;
		dest_temp++;
	}
	if (idx == n && src_temp[idx] != c)
		return (NULL);
	if (idx < n && src_temp[idx] == c)
		*(dest_temp++) = src_temp[idx];
	return (dest_temp);
}
