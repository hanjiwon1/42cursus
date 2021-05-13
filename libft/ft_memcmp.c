/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:52:23 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/13 19:07:01 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			idx;

	idx = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (idx < n)
	{
		if (temp1[idx] != temp2[idx])
			return (temp1[idx] - temp2[idx]);
		idx++;
	}
	return (0);
}
