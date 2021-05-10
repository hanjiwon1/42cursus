/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:57:31 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/10 16:43:04 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	src_len;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (0);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	idx = dst_len;
	while (idx + 1 < dstsize && *src)
	{
		dst[idx] = *(src++);
		idx++;
	}
	dst[idx] = '\0';
	return (dst_len + src_len);
}
