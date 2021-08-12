/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 06:31:19 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/08 02:37:48 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isin(char const *set, char letter)
{
	unsigned int	counter;

	counter = 0;
	while (counter < ft_strlen(set))
	{
		if (*(set + counter) == letter)
			return (1);
		counter++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*temp;
	unsigned int	start;
	unsigned int	end;
	unsigned int	length;

	start = 0;
	while (isin(set, *(s1 + start)) && start < ft_strlen(s1))
		start++;
	if (start == ft_strlen(s1))
	{
		temp = (char *)malloc(sizeof(char) * 1);
		*temp = 0;
		return (temp);
	}
	end = 0;
	if (!(start != 0 && ft_strlen(s1) - ft_strlen(set) < ft_strlen(set)))
		while (isin(set, *(s1 + ft_strlen(s1) - 1 - end))
			&& end < ft_strlen(s1))
			end++;
	length = ft_strlen(s1) - start - end + 1;
	temp = (char *)malloc(length);
	if (!temp)
		return (0);
	ft_strlcpy(temp, s1 + start, length);
	return (temp);
}
