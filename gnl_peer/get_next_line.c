/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byungkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:44:32 by byungkim          #+#    #+#             */
/*   Updated: 2021/05/13 01:22:35 by byungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*my_lstfd(t_list *lst, int fd)
{
	while (lst)
	{
		if (lst->fd == fd)
			return (lst);
		lst = lst->next;
	}
	return (0);
}

static t_list	*my_lstnew(t_list **lst, int fd, char *backup)
{
	t_list	*it;
	t_list	*new;

	if (!(new = malloc(sizeof(t_list))))
		return (0);
	*new = (t_list){fd, backup, 0};
	if (!*lst)
	{
		*lst = new;
		return (new);
	}
	it = *lst;
	while (it->next)
		it = it->next;
	it->next = new;
	return (new);
}

static int		my_lstdel(t_list **lst, int fd)
{
	t_list	*prev;
	t_list	*cur;

	prev = *lst;
	cur = (*lst)->next;
	if (prev->fd == fd)
	{
		free(prev->backup);
		free(prev);
		*lst = cur;
		return (0);
	}
	while (cur)
	{
		if (cur->fd == fd)
		{
			prev->next = cur->next;
			free(cur->backup);
			free(cur);
			return (0);
		}
		prev = cur;
		cur = cur->next;
	}
	return (0);
}

static int		my_read_line(t_list **backup, int fd, char **line)
{
	t_list	*it;
	char	*deli;
	char	*tmp;

	if ((it = my_lstfd(*backup, fd)))
	{
		if ((deli = my_strchr(it->backup, '\n')))
		{
			*deli = 0;
			*line = my_strdup(it->backup);
			tmp = it->backup;
			it->backup = my_strdup(deli + 1);
			free(tmp);
			return (1);
		}
		*line = my_strdup(it->backup);
		my_lstdel(backup, fd);
		return (0);
	}
	*line = my_strdup("");
	return (0);
}

int				get_next_line(int fd, char **line)
{
	char			buf[BUFFER_SIZE + 1];
	static t_list	*backup;
	t_list			*it;
	ssize_t			nbyte;

	if (fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	while ((nbyte = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[nbyte] = 0;
		if ((it = my_lstfd(backup, fd)))
			it->backup = my_strjoin(it->backup, buf);
		else
			it = my_lstnew(&backup, fd, my_strdup(buf));
		if (my_strchr(it->backup, '\n'))
			return (my_read_line(&backup, fd, line));
	}
	if (nbyte == -1)
		return (-1);
	return (my_read_line(&backup, fd, line));
}
