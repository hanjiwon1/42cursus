/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:07:25 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/13 12:48:58 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	idx = 0;
	if (!dst || !src)
	{
		return (0);
	}
	if (dstsize == 0)
		return (ft_strlen(src));
	while (idx + 1 < dstsize && src[idx])
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (ft_strlen(src));
}
