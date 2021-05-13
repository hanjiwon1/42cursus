/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 15:40:37 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/13 15:59:40 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;
	size_t	idx;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	idx = 0;
	while (*s)
	{
		ret[idx] = f(idx, *s);
		idx++;
	}
	ret[idx] = '\0';
	return (ret);
}
