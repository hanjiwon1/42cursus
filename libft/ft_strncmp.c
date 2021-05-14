/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:28:47 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/14 14:37:58 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			idx;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	idx = 0;
	while (idx < n)
	{
		if (*temp_s1 != *temp_s2 || !(*temp_s1))
			return (*temp_s1 - *temp_s2);
		temp_s1++;
		temp_s2++;
		idx++;
	}
	return (0);
}
