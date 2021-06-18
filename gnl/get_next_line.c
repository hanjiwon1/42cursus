/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 03:05:00 by jiwhan            #+#    #+#             */
/*   Updated: 2021/06/19 05:28:44 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	find_buf(t_list *backup_buf, int fd)
{
	if (backup_buf = NULL)
		return (ft_lstnew(fd));
	if (fd != 0)
	{
		while ()
	}
}

static int		join_contents(t_list *backup_buf, int buf, ssize_t read_size)
{
	
}

static int		line_check(t_list *backup_buf, char **line)
{

}

int				get_next_line(int fd, char **line)
{
	static t_list	*head;
	t_list			*backup_buf
	char			*buf;
	ssize_t			read_size;

	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	backup_buf = find_buf(head, fd);
	while ((read_size = read(fd, buf, BUFFER_SIZE)) >= 0)
	{
		if (join_contents(backup_buf, buf, read_size) || read_size == 0)
			break;
	}
	free(buf);
	if (read_size < 0)
		return (-1)
	return (line_check(backup, line));
}