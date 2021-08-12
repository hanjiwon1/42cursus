/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:41:24 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/06 01:33:40 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int letter)
{
	char	*srccopy;
	char	*here;

	if (!src)
		return (0);
	here = NULL;
	srccopy = (char *)src;
	while (*srccopy)
	{
		if (*srccopy == (char)letter)
			here = srccopy;
		srccopy++;
	}
	if (*srccopy == letter)
		here = srccopy;
	return (here);
}
