/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:25:36 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/18 15:05:42 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s1;
	while (n != 0)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		temp++;
		n--;
	}
	return (NULL);
}
