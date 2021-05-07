/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:57:28 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/07 19:01:43 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	size;
	size_t	idx;

	if (start >= ft_strlen(s))
		return (0);
	if (ft_strlen(s) - (size_t)start > len)
		size = len + 1;
	else
		size = ft_strlen(s) - (size_t)start + 1;
	printf("size : %d\n", size);
	if (!(temp = (char *)malloc(sizeof(char) * size)))
		return (0);
	ft_memset(temp, 0, size);
	idx = 0;
	while (idx < size + 1)
	{
		temp[idx] = *(s + (start++));
		idx++;
	}
	return (temp);
}
