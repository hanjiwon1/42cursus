/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 21:16:52 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/18 14:38:19 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	if (!dest && !src)
		return (NULL);
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	idx = 0;
	while (idx < n)
	{
		dest_temp[idx] = src_temp[idx];
		idx++;
	}
	return (dest);
}
