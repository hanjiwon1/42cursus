#include <stdio.h>
#include <stdlib.h>

typedef struct s_test
{
	int fd;
	struct s_test *next;
} t_test;

t_test *ft_lstnew(int fd)
{
	t_test *node;

	if (!(node = (t_test *)malloc(sizeof(t_test))))
			return (NULL);
	printf("3");
	node->fd = fd;
	printf("4");
	node->next = NULL;
	return (node);
}

void ft_lstaddb(t_test **lst, t_test *new)
{
	t_test *last;

	if (!lst || !new)
	{
		printf("5");
		return ;
	}
	if (!(*lst))
	{
		printf("6");
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
			last = last->next;
	last->next = new;
}

static t_test *find_buf(t_test **backup_buf, int fd)
{
	t_test *temp;
	if (*backup_buf == NULL)
	{
		printf("1");
		*backup_buf = ft_lstnew(fd);
		return (*backup_buf);
	}
	temp = *backup_buf;
	while (temp != NULL)
	{
		printf("2");
		if (temp->fd == fd)
				return (temp);
		if (temp->next == NULL)
				temp->next = ft_lstnew(fd);
		temp = temp->next;
	}
	return (temp);
}

int		ft_lstsize(t_test *lst)
{
	int cnt;
	cnt = 0;
	while (lst)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}

int main()
{
	static t_test *head;
	t_test *backup;
	int fd = 0;
	while (fd != -1)
	{
		scanf("%d", &fd);
		backup = find_buf(&head, fd);
		printf("\nbackup's fd: %d\n", backup->fd);
		printf("list size: %d\n", ft_lstsize(head));
	}
	return (0);
}
