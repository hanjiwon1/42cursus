/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:57:28 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/13 18:13:23 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	size;
	size_t	idx;

	if (start >= ft_strlen(s))
	{
		if (!(temp = (char *)malloc(sizeof(char))))
			return (NULL);
		*temp = '\0';
		return (temp);
	}
	if (ft_strlen(s) - (size_t)start > len)
		size = len + 1;
	else
		size = ft_strlen(s) - (size_t)start + 1;
	if (!(temp = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_memset(temp, 0, size);
	idx = 0;
	while (idx < size - 1)
		temp[idx++] = *(s + (start++));
	temp[size] = '\0';
	return (temp);
}
