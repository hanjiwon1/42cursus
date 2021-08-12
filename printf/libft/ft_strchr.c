/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:41:24 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 01:32:26 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int letter)
{
	char	*srccopy;

	if (!src)
		return (0);
	srccopy = (char *)src;
	while (*srccopy)
	{
		if (*srccopy == (char)letter)
			return (srccopy);
		srccopy++;
	}
	if (*srccopy == letter)
		return (srccopy);
	return (0);
}
