/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:30:12 by jiwhan            #+#    #+#             */
/*   Updated: 2022/02/06 17:04:47 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	temp = (void *)malloc(size * nmemb);
	if (!(temp))
		return (0);
	ft_memset(temp, 0, nmemb * size);
	return (temp);
}
