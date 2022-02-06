/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:43:04 by jiwhan            #+#    #+#             */
/*   Updated: 2022/02/06 17:11:09 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_cntdigit(int n)
{
	size_t	cnt;

	cnt = 0;
	if (n <= 0)
		cnt++;
	while (n)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	size_t			n_cnt;
	unsigned int	p_num;
	char			*ret;

	n_cnt = ft_cntdigit(n);
	ret = (char *)malloc(sizeof(char) * (n_cnt + 1));
	if (!(ret))
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		p_num = -1 * n;
	}
	else
		p_num = n;
	ret[n_cnt] = '\0';
	if (p_num == 0)
		ret[0] = '0';
	while (p_num)
	{
		ret[n_cnt - 1] = p_num % 10 + '0';
		n_cnt--;
		p_num /= 10;
	}
	return (ret);
}
