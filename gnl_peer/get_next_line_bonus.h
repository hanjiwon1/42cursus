/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 23:56:14 by byungkim          #+#    #+#             */
/*   Updated: 2021/06/19 18:03:47 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	int				fd;
	char			*backup;
	struct s_list	*next;
}					t_list;

int					get_next_line(int fd, char **line);
char				*my_strchr(char *s, int c);
char				*my_strjoin(char *s1, char *s2);
char				*my_strdup(char *s1);
size_t				my_strlen(char *s);

#endif
