/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:13:27 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/14 14:09:53 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		idx;

	idx = ft_strlen(s);
	while (idx > 0)
	{
		if (s[idx] == c)
			return ((char *)s + idx);
		idx--;
	}
	if (s[idx] == c)
		return ((char *)s);
	return (NULL);
}
