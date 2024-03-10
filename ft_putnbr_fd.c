/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:30:35 by kgriset           #+#    #+#             */
/*   Updated: 2024/03/10 15:53:58 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	long	n_c;
	char	current;

	sign = 1;
	n_c = (long)n;
	if (n_c < 0)
	{
		sign = -1;
		if(!write(fd, "-", sizeof(char)))
            return;
	}
	n_c *= sign;
	if (n_c / 10)
		ft_putnbr_fd(n_c / 10, fd);
	current = '0' + n_c % 10;
	if(!write(fd, &current, sizeof(char)))
        return;
}

// #include <limits.h>
// int main ()
// {
//     ft_putnbr_fd(INT_MIN, 1);
//     return (1);
// }
