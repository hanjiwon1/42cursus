/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 04:17:13 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 02:46:30 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	unsigned int	counter;
	unsigned int	destkeep;

	if (len <= ft_strlen(dest))
		return (ft_strlen(src) + len);
	counter = 0;
	destkeep = ft_strlen(dest);
	while (counter < len - destkeep - 1 && *(src + counter) != '\0')
	{
		*(dest + destkeep + counter) = *(src + counter);
		counter++;
	}
	*(dest + destkeep + counter) = '\0';
	return (ft_strlen(src) + destkeep);
}
