/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:22:00 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/14 18:34:43 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
void ft_putstr_fd(char *s, int fd){
    ssize_t check;
    size_t l_s;

    l_s = ft_strlen(s);
    check = write(fd, s, l_s*sizeof(char));
    if (check)
        check = 0;
}
