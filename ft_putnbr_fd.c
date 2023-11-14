/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:30:35 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/14 19:22:40 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    ssize_t check;
    int sign;
    long n_c;
    char current;

    sign = 1;
    n_c = (long)n;
    if (n_c < 0)
    {
        sign = -1;
        check = write(fd, "-", sizeof(char));
    }
    n_c *= sign;
    if (n_c/10)
       ft_putnbr_fd(n_c/10,fd);
    current = '0' + n_c%10;
    check = write(fd, &current, sizeof(char));
    if (check)
        check = 0;
}

// #include <limits.h>
// int main ()
// {
//     ft_putnbr_fd(INT_MIN, 1);
//     return (1);
// }
