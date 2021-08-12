/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 01:53:22 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 01:31:09 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *hay, int niddle, size_t len)
{
	unsigned int	counter;

	counter = 0;
	while (counter < len)
	{
		if (*(unsigned char *)(hay + counter) == (unsigned char)niddle)
			return ((void *)(hay + counter));
		counter++;
	}
	return (0);
}
