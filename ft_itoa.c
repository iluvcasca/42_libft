/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:24:14 by kgriset           #+#    #+#             */
/*   Updated: 2024/01/30 12:00:26 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	c_size(int n, unsigned int *p_n, int *sign)
{
	unsigned int	size;

	size = 1;
	*sign = 1;
	if (n < 0 && size++)
		*sign = -1;
	*p_n = *sign * n;
	while (*p_n / 10)
	{
		size++;
		*p_n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	unsigned int	p_n;
	int				sign;
	unsigned int	size;
	char			*a;

	size = c_size(n, &p_n, &sign);
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

//#include <limits.h>
//#include <stdio.h>
//
// int	main(void)
//{
//	char	*a;
//
//	a = ft_itoa(INT_MIN);
//	printf("%s\n", a);
//	free(a);
//}
