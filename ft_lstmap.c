/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:39:46 by kgriset           #+#    #+#             */
/*   Updated: 2024/01/30 12:00:32 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l_next;
	t_list	*new_l;

	new_l = ft_lstnew((*f)(lst->content));
	if (!new_l)
	{
		ft_lstclear(&new_l, del);
		return (NULL);
	}
	l_next = lst->next;
	while (l_next)
	{
		ft_lstadd_back(&new_l, ft_lstnew((*f)(l_next->content)));
		if (!new_l)
		{
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		l_next = l_next->next;
	}
	return (new_l);
}
