/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:03:27 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/07 22:24:31 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ccheck(char const *s, char c)
{
	unsigned int	counter;
	unsigned int	flag;

	counter = 0;
	flag = 0;
	while (*(s) != '\0')
	{
		if (*(s) != c && flag == 0)
			flag = 1;
		if (*(s) == c && flag == 1)
			counter++;
		s++;
		if (*(s) == '\0' && *(s - 1) == c && flag == 1)
			counter -= 2;
	}
	return (counter);
}

unsigned int	fillandnext(char *temp, char const *next, char const *s, char c)
{
	ft_memset(temp, '\0', ft_strlen(s) + 1);
	ft_memccpy(temp, next, c, ft_strlen(next));
	return (ft_strlen(temp));
}

char	**freeall(char **result, unsigned int resultcounter, char *temp)
{
	unsigned int	counter;

	counter = 0;
	while (counter < resultcounter)
	{
		free(*(result + counter));
		counter++;
	}
	free(result);
	free(temp);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	char			*temp;
	char const		*next;
	unsigned int	resultcounter;

	result = (char **)malloc(sizeof(char *) * (ft_ccheck(s, c) + 2));
	temp = (char *)malloc(ft_strlen(s) + 1);
	if (result == 0 || temp == 0)
		return (0);
	next = s;
	resultcounter = 0;
	while (*next != '\0' && ft_strlen(s) != 0)
	{
		next += fillandnext(temp, next, s, c);
		if (ft_strchr(temp, c) != 0)
			*ft_strchr(temp, c) = '\0';
		if (ft_strlen(temp) > 0)
			*(result + resultcounter++) = ft_strdup(temp);
		if (!(result + resultcounter))
			return (freeall(result, resultcounter, temp));
	}
	free(temp);
	*(result + resultcounter) = 0;
	return (result);
}
