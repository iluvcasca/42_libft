/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:45:34 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/14 18:35:06 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
// to check
void ft_putchar_fd(char c, int fd){
    ssize_t check;
    check = write(fd,&c,sizeof(char));        
    if (check)
        check = 0;
}
