/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:38:31 by jiwhan            #+#    #+#             */
/*   Updated: 2022/02/06 17:15:40 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	size_t	idx;
	char	*temp;

	s_len = ft_strlen(s);
	idx = 0;
	temp = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!temp)
		return (NULL);
	while (s[idx])
	{
		temp[idx] = s[idx];
		idx++;
	}
	temp[idx] = '\0';
	return (temp);
}
