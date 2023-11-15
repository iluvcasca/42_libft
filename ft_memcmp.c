/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:02:58 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 17:10:04 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// retest sur mac
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n > 0)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		n--;
		i++;
	}
	return (0);
}

//#include <string.h>
//#include <stdio.h>
// int main () {
//    int array[3] = { 134, 43434343, 43};
//    int array2[3] = { 134, 43434343, 45};
//    printf("   memcmp: %i\n", memcmp(array, array2, 3* sizeof(int)));
//    printf("ft_memcmp: %i\n", ft_memcmp(array, array2, 3 * sizeof(int)));
//    return (1);
//}
