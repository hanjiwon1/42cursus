/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:16:47 by sbaek             #+#    #+#             */
/*   Updated: 2021/08/12 12:16:45 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int				ft_printf(const char *c, ...);
unsigned int	ft_putstring(char *c, int p);
unsigned int	ft_putptr(long long c);
unsigned int	put_digit(int f, long long c, int p);
unsigned int	put_deximal(int f, char x, unsigned long long c, int p);

#endif
