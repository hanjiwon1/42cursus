/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:49:28 by jiwhan            #+#    #+#             */
/*   Updated: 2022/02/07 17:21:31 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int				ft_printf(const char *c, ...);
unsigned int	ft_print_str(char *s);
unsigned int	ft_print_ptr(long long p);
unsigned int	ft_print_integer(int num);
unsigned int	ft_print_unsigned_integer(unsigned int num);
unsigned int	ft_print_dex(unsigned long long num, char x);

#endif