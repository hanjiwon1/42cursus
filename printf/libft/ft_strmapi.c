/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:48:22 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 01:42:55 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp;
	unsigned int	counter;

	temp = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!temp)
		return (0);
	counter = 0;
	while (counter < ft_strlen(s))
	{
		*(temp + counter) = f(counter, *(s + counter));
		counter++;
	}
	*(temp + counter) = '\0';
	return (temp);
}
