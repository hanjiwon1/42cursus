/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 04:54:00 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 01:22:44 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*temp;

	temp = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!temp)
		return (0);
	ft_strlcpy(temp, src, ft_strlen(src) + 1);
	return (temp);
}
