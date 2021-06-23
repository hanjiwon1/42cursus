/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 03:05:00 by jiwhan            #+#    #+#             */
/*   Updated: 2021/06/24 02:55:13 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list			*ft_lstnew(int fd)
{
	t_list *node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->fd = fd;
	node->contents = NULL;
	node->next = NULL;
	return (node);
}

void			ft_lstdelone(t_list **lst, int fd)
{
	t_list	*prev;
	t_list	*curr;

	prev = *lst;
	curr = (*lst)->next;
	if (prev->fd == fd)
	{
		free(prev->contents);
		free(prev);
		*lst = curr;
		return ;
	}
	while (curr)
	{
		if (curr->fd == fd)
		{
			prev->next = curr->next;
			free(curr->contents);
			free(curr);
			return ;
		}
		prev = curr;
		curr = curr->next;
	}
	return ;
}

static t_list	*find_buf(t_list **backup_buf, int fd)
{
	t_list	*temp;

	if (*backup_buf == NULL)
	{
		*backup_buf = ft_lstnew(fd);
		return (*backup_buf);
	}
	temp = *backup_buf;
	while (temp != NULL)
	{
		if (temp->fd == fd)
			return (temp);
		if (temp->next == NULL)
			temp->next = ft_lstnew(fd);
		temp = temp->next;
	}
	return (temp);
}

static int		check_line(t_list **head, int fd, char **line)
{
	char	*ptr;
	t_list	*backup_buf;
	char	*temp;

	backup_buf = find_buf(head, fd);
	if ((backup_buf)->contents == NULL)
	{
		*line = ft_strdup("");
		ft_lstdelone(head, fd);
		return (0);
	}
	if ((ptr = ft_strchr(backup_buf->contents, '\n')))
	{
		*ptr = '\0';
		*line = ft_strdup(backup_buf->contents);
		temp = backup_buf->contents;
		backup_buf->contents = ft_strdup(ptr + 1);
		free (temp);
		return (1);
	}
	*line = ft_strdup(backup_buf->contents);
	ft_lstdelone(head, fd);
	return (0);
}

int				get_next_line(int fd, char **line)
{
	static t_list	*head;
	t_list			*backup_buf;
	char			*buf;
	ssize_t			read_size;

	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	backup_buf = find_buf(&head, fd);
	while ((read_size = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[read_size] = '\0';
		if (backup_buf->contents == NULL)
			backup_buf->contents = ft_strdup(buf);
		else
			backup_buf->contents = ft_strjoin(backup_buf->contents, buf);
		if (ft_strchr(backup_buf->contents, '\n'))
			break ;
	}
	free(buf);
	if (read_size < 0)
		return (-1);
	return (check_line(&head, fd, line));
}
