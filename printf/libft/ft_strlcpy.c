/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 02:42:18 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/05 05:20:57 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dist, const char *src, size_t len)
{
	unsigned int	counter;

	counter = 0;
	if (dist == 0 || src == 0)
		return (0);
	if (len != 0)
	{
		while (counter < len - 1 && counter < ft_strlen(src))
		{
			*(dist + counter) = *(src + counter);
			counter++;
		}
		*(dist + counter) = '\0';
	}
	return (ft_strlen(src));
}
