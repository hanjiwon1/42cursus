/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 04:03:18 by jiwhan            #+#    #+#             */
/*   Updated: 2021/06/25 17:39:16 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	if (!dest && !src)
		return (NULL);
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	idx = 0;
	while (idx < n)
	{
		dest_temp[idx] = src_temp[idx];
		idx++;
	}
	return (dest);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	len++;
	while (len--)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	char		*ret;
	const char	*temp;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	temp = s1;
	if (!(ret = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (0);
	ft_memcpy(ret, s1, len1);
	ft_memcpy(ret + len1, s2, len2);
	ret[len1 + len2] = '\0';
	free((char *)temp);
	return (ret);
}

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	size_t	idx;
	char	*temp;

	s_len = ft_strlen(s);
	idx = 0;
	if (!(temp = (char *)malloc(sizeof(char) * (s_len + 1))))
		return (NULL);
	while (s[idx])
	{
		temp[idx] = s[idx];
		idx++;
	}
	temp[idx] = '\0';
	return (temp);
}
