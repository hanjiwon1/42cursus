/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 18:23:58 by jiwhan            #+#    #+#             */
/*   Updated: 2022/02/06 17:16:03 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, s1, s1_len + 1);
	ft_strlcat(temp, s2, s1_len + s2_len + 1);
	return (temp);
}
