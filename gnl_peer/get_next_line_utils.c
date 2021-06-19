/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:46:54 by byungkim          #+#    #+#             */
/*   Updated: 2021/06/19 18:03:35 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*my_strchr(char *s, int c)
{
	char	c_c;

	c_c = (char)c;
	while (1)
	{
		if (*s == c_c)
			return ((char *)s);
		if (*s == 0)
			return (0);
		s++;
	}
}

char	*my_strjoin(char *s1, char *s2)
{
	char	*ret;
	char	*ptr;
	size_t	len1;
	size_t	len2;

	len1 = my_strlen(s1);
	len2 = my_strlen(s2);
	if (!(ret = malloc(len1 + len2 + 1)))
		return (0);
	ptr = ret;
	while (len1--)
		*(ptr++) = *(s1++);
	while (len2--)
		*(ptr++) = *(s2++);
	*ptr = 0;
	return (ret);
}

char	*my_strdup(char *s1)
{
	char	*ret;
	char	*ptr;
	size_t	len;

	len = my_strlen(s1);
	if (!(ret = malloc(len + 1)))
		return (0);
	ptr = ret;
	while (len--)
		*(ptr++) = *(s1++);
	*ptr = 0;
	return (ret);
}

size_t	my_strlen(char *s)
{
	size_t			len;
	unsigned char	*ptr;

	len = 0;
	ptr = (unsigned char *)s;
	while (*(ptr++))
		len++;
	return (len);
}
