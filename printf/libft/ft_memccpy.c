/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:02:19 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 14:43:14 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	cnt;

	cnt = 0;
	while (cnt < n)
	{
		*(unsigned char *)dest = *(unsigned char *)(src + cnt);
		if (*(unsigned char *)(src + cnt) == (unsigned char)c)
			return ((unsigned char *)(dest + 1));
		dest++;
		cnt++;
	}
	return (0);
}
