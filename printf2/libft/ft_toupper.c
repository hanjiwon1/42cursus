/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <ohj8447@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:08:35 by hwon              #+#    #+#             */
/*   Updated: 2021/05/10 18:39:13 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	dip;

	dip = 'A' - 'a';
	if (!ft_isalpha(c))
		return (c);
	if (c >= 'a' && c <= 'z')
		c += dip;
	return (c);
}
