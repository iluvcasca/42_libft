/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:26:15 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/14 18:35:25 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
void ft_putendl_fd(char *s, int fd)
{
    size_t l_s;
    ssize_t check;

    l_s = ft_strlen(s);
    check = write(fd, s, l_s*sizeof(char));
    check = write(fd, "\n", sizeof(char));
    if (check)
        check = 0;
}
