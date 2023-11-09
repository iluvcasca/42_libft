/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:21:19 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/09 15:15:14 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

int ft_isdigit(int c) {
  if (c >= '0' && c <= '9')
    return (c);
  else
    return (0);
}

int ft_atoi(const char *nptr) {
	int i = 0;
	int result = 0;
	int sign = 1;
	while ( ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ') && nptr[i] )
		i++;
	if ( nptr[i] == '-' )
	{
		sign = -1;		
		i++;
	}
	else if ( nptr[i] == '+' )
		i++;
	while ( ft_isdigit((unsigned char)nptr[i]))
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result*sign);
}

int main() { 
	char *nptr = "   \t\n-2147483648   4";
	printf("   atoi: %i\n", atoi(nptr));
	printf("ft_atoi: %i\n", ft_atoi(nptr));
	return (1);
}
