/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:44:11 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/13 14:40:28 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memfree(char **s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

size_t	ft_wordcnt(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s != c && *s)
				s++;
		}
	}
	return (cnt);
}

void	ft_split2(char const *s, char c, char **ret)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			if (!(ret[j] = (char *)malloc(sizeof(char) * (i - start + 1))))
			{
				ft_memfree(ret, j);
				return ;
			}
			ft_strlcpy(ret[j], s + start, i - start + 1);
			j++;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	w_cnt;

	if (s == 0)
		return (NULL);
	w_cnt = ft_wordcnt(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (w_cnt + 1))))
		return (NULL);
	ret[w_cnt] = NULL;
	if (w_cnt == 0)
		return (ret);
	ft_split2(s, c, ret);
	return (ret);
}
