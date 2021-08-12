/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 00:53:00 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/08 02:38:06 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	c;

	if (dest == 0 && src == 0)
		return (0);
	c = 0;
	if (src > dest)
	{
		while (c < (int)n)
		{
			*(unsigned char *)(dest + c) = *(unsigned char *)(src + c);
			c++;
		}
	}
	else
	{
		c = n - 1;
		while (c >= 0)
		{
			*(unsigned char *)(dest + c) = *(unsigned char *)(src + c);
			c--;
		}
	}
	return (dest);
}
