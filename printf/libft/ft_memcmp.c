/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 02:16:19 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/05 05:21:22 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t len)
{
	unsigned int	c;

	c = 0;
	while (c < len)
	{
		if (*(unsigned char *)(p1 + c) != *(unsigned char *)(p2 + c))
			return (*(unsigned char *)(p1 + c) - *(unsigned char *)(p2 + c));
		c++;
	}
	return (0);
}
