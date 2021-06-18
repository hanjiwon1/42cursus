/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 21:05:11 by jiwhan            #+#    #+#             */
/*   Updated: 2021/06/19 05:28:48 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	int				fd;
	char			*contents;
	struct s_list	*next;
}				t_list

int				get_next_line(int fd, char **line)

#endif