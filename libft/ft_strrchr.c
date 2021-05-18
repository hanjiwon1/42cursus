/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:13:27 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/18 15:24:05 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		idx;
	const char	*last;

	idx = 0;
	last = NULL;
	while (s[idx] != 0)
	{
		if (s[idx] == (char)c)
			last = &s[idx];
		idx++;
	}
	if (c == 0)
		return ((char *)&s[idx]);
	return ((char *)last);
}
