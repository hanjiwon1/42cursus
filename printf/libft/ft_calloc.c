/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 04:47:12 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 16:30:22 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*temp;

	temp = (void *)malloc(count * size);
	if (!temp)
		return (0);
	ft_memset(temp, 0, count * size);
	return (temp);
}
