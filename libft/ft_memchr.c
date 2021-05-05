/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:25:36 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/05 17:01:09 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s1, int c, size_t n)
{
	const char	*temp;

	temp = s1;
	while (*temp != c && n != 0)
	{
		temp++;
		n--;
	}
	if (*temp == c)
		return ((void *)temp);
	else
		return (NULL);
}
