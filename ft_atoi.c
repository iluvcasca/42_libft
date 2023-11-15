/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:21:19 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 15:34:43 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ') && nptr[i])
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit((unsigned char)nptr[i]))
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

//#include <stdlib.h>
//#include <stdio.h>
// int main() {
//	char *nptr = "   \t\n-2147483648   4";
//	printf("   atoi: %i\n", atoi(nptr));
//	printf("ft_atoi: %i\n", ft_atoi(nptr));
//	printf("%u", (unsigned int)-1);
//	return (1);
//}
