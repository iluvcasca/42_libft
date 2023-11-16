/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:51:39 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/16 12:55:58 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    int i;

    t_list *last;

    i = 0;
    last = lst;
    while (lst)
    {
        i++;
        last = lst;
        lst = lst->next;
    }
   return (last); 
}
