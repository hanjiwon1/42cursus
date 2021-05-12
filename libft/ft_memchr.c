/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:25:36 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/12 22:14:39 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	const char	*temp;

	temp = s1;
	while (n != 0)
	{
		if (*temp == c)
			return ((void *)temp);
		temp++;
		n--;
	}
	return (NULL);
}
