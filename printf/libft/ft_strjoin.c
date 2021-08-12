/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 05:54:50 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 03:20:13 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*temp;
	unsigned int	length;

	if (!s1 && !s2)
		return (0);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	temp = (char *)malloc(sizeof(char) * length);
	ft_bzero(temp, length);
	if (!temp)
		return (0);
	ft_strlcat(temp, s1, length);
	ft_strlcat(temp, s2, length);
	return (temp);
}
