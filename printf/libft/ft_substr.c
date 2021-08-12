/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 05:10:05 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 02:22:34 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	counter;

	counter = 0;
	if (ft_strlen(src) < start)
		len = 0;
	if (ft_strlen(src) - start > len)
		temp = (char *)malloc(sizeof(char) * (len + 1));
	else
		temp = (char *)malloc(sizeof(char) * (ft_strlen(src) - start + 1));
	if (!temp || !src)
		return (0);
	while (counter < len && counter < (ft_strlen(src) - start))
	{
		*(temp + counter) = *(src + start + counter);
		counter++;
	}
	*(temp + counter) = '\0';
	return (temp);
}
