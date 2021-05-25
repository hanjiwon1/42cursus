/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:53:59 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/22 15:57:32 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef OPEN_MAX
#  define OPEN_MAX	10240
# endif

int		get_next_line(int fd, char **line);
size_t	ft_strlen(char const *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strndup(const char *s, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
#endif