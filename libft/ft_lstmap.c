/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:27:59 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/14 18:43:54 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_node;

	new_head = NULL;
	while (lst)
	{
		if (!(new_node = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(new_head, del);
			return (NULL);
		}
		ft_lstadd_back(new_head, new_node);
		lst = lst->next;
	}
	return (new_head);
}
