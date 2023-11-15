/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:24:14 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 15:35:57 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

// lancer le debugeur avec intmin hehe
char	*ft_itoa(int n)
{
	unsigned int	p_n;
	int				sign;
	unsigned int	size;
	char			*a;

	sign = 1;
	size = 1;
	if (n < 0 && size++)
		sign = -1;
	p_n = sign * n;
	while (p_n / 10)
	{
		size++;
		p_n /= 10;
	}
	a = malloc(sizeof(char) * (size + 1));
	if (!a)
		return (NULL);
	a[size] = '\0';
	p_n = sign * n;
	while (p_n / 10)
	{
		a[--size] = '0' + p_n % 10;
		p_n /= 10;
	}
	a[--size] = '0' + p_n % 10;
	if (sign == -1)
		a[--size] = '-';
	return (a);
}

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     char* a = ft_itoa(INT_MIN);
//     printf("%s\n", a);
//     free(a);
// }
