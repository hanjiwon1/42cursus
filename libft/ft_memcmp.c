/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:52:23 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/05 17:52:32 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*temp1;
	const char	*temp2;
	size_t		idx;

	idx = 0;
	temp1 = s1;
	temp2 = s2;
	while (idx < n)
	{
		if (temp1[idx] != temp2[idx])
			return (temp1[idx] - temp2[idx]);
		idx++;
	}
	return (0);
}
