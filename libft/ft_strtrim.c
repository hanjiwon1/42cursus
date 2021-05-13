/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 16:49:32 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/13 18:13:11 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	beginning;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	beginning = 0;
	end = ft_strlen(s1) - 1;
	while (s1[beginning] && ft_strchr(set, s1[beginning]))
		beginning++;
	while (s1[end] && ft_strchr(set, s1[end]) && end > beginning)
		end--;
	if (!(temp = (char *)malloc(sizeof(char) * (end - beginning + 2))))
		return (NULL);
	ft_strlcpy(temp, s1 + beginning, (end - beginning + 2));
	return (temp);
}
