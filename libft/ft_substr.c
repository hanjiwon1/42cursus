/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:57:28 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/14 16:31:27 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	idx;

	if (start >= ft_strlen(s))
	{
		if (!(temp = (char *)malloc(sizeof(char))))
			return (NULL);
		*temp = '\0';
		return (temp);
	}
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_memset(temp, 0, len + 1);
	idx = 0;
	while (idx < len && s[idx])
		temp[idx++] = s[start++];
	temp[idx] = '\0';
	return (temp);
}
