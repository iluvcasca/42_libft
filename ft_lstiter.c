/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:18:24 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/17 09:56:14 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*l_next;

	l_next = lst->next;
	while (l_next)
	{
		(*f)(lst->content);
		lst = l_next;
		l_next = l_next->next;
	}
	(*f)(lst->content);
}
