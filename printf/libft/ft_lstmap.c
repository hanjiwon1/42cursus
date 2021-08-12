/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 00:46:54 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/08 01:54:04 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*freeall(t_list *begin, void (*del)(void *))
{
	t_list	*temp;

	while (begin)
	{
		temp = begin->next;
		(*del)(begin);
		free(begin);
		begin = temp;
	}
	return (0);
}

void	setfirst(t_list **temp, t_list **new, t_list **begin)
{
	*begin = *new;
	*temp = *new;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*begin;

	if (!lst || !(*f) || !(*del))
		return (0);
	begin = 0;
	while (lst)
	{
		new = (t_list *)malloc(sizeof(t_list));
		new->content = (*f)(lst->content);
		if (!new)
			return (freeall(begin, (*del)));
		if (begin == 0)
			setfirst(&temp, &new, &begin);
		else
		{
			temp->next = new;
			temp = new;
		}
		lst = lst->next;
	}
	return (begin);
}
