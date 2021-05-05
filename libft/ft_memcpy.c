/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 21:16:52 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/05 17:52:40 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		idx;
	char		*dest_temp;
	const char	*src_temp;

	dest_temp = dest;
	src_temp = src;
	idx = 0;
	while (idx < n && src_temp[idx])
	{
		dest_temp[idx] = src_temp[idx];
		idx++;
	}
	return (dest);
}
