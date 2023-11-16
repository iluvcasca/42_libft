/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:57:46 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/16 13:46:34 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new) {
    t_list *last;

    if (*lst == NULL)
        *lst = new;
    else
    {
        last = ft_lstlast(*lst);
        last->next = new;
    }
}
