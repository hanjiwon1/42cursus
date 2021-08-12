/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:12:34 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/05 05:22:32 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *src, const char *comp, size_t n)
{
	unsigned int	count;

	count = 0;
	while (count < n && count < ft_strlen(src) && count < ft_strlen(comp))
	{
		if (*(src + count) != *(comp + count))
			break ;
		count++;
	}
	if (*(src + count) != *(comp + count) && count < n)
		return ((unsigned char)*(src + count) - (unsigned char)*(comp + count));
	else
		return (0);
}
