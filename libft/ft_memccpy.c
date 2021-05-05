/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:20:06 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/05 17:52:21 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*src_temp;
	char		*dest_temp;
	size_t		idx;

	idx = 0;
	src_temp = src;
	dest_temp = dest;
	while (idx < n && src_temp[idx] != c && src_temp[idx])
	{
		*dest_temp = src_temp[idx];
		idx++;
		dest_temp++;
	}
	if (idx == n && src_temp[idx] != c)
		return (NULL);
	return (dest_temp);
}
