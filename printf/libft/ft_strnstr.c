/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:42:02 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 01:40:03 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	unsigned int	counter;
	unsigned int	partcomp;

	if (ft_strlen(needle) == 0)
		return ((char *)hay);
	if (len == 0 || hay == 0 || ft_strlen(hay) == 0)
		return (0);
	counter = 0;
	while (counter < ft_strlen(hay))
	{
		partcomp = 0;
		if (*(hay + counter) == *needle)
		{
			while (partcomp < ft_strlen(needle) && partcomp + counter <= len)
			{
				if (*(hay + counter + partcomp) != *(needle + partcomp))
					break ;
				partcomp++;
			}
			if (partcomp == ft_strlen(needle) && partcomp + counter - 1 < len)
				return ((char *)(hay + counter));
		}
		counter++;
	}
	return (0);
}
