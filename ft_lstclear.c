/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:03:51 by kgriset           #+#    #+#             */
/*   Updated: 2024/01/30 12:00:28 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l_next;
	t_list	*current;

	if (*lst != NULL)
	{
		current = *lst;
		l_next = current->next;
		while (l_next)
		{
			ft_lstdelone(current, del);
			current = l_next;
			l_next = l_next->next;
		}
		ft_lstdelone(current, del);
	}
	*lst = NULL;
}
