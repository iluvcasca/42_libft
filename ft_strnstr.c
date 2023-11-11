/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:16:20 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 18:58:20 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len){
	size_t i;
	size_t j;
	size_t l_little;
	i = 0;
	while (little[i])
		i++;
	l_little = i;
	if (!little)
		return ((char*)big);
	if (len < l_little)
		return (NULL);
	while (i<len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && big[i+j])
			{
				if (big[i+j] != little[j])
					break;
				j++;
			}
			if (j == l_little)
				return (char*)(big + i);
		}	
		i++;
	}
	return (NULL);
}

#include <bsd/string.h>
#include <stdio.h>

int main() {
	const char *largestring = "Foo Bar Baz";
        const char *smallstring = "Bar";	
	printf("ft_strnstr: %p\n", ft_strnstr(largestring, smallstring, 4));
	printf("   strnstr: %p\n", strnstr(largestring, smallstring, 4));
	printf("\nft_strnstr: %p\n", ft_strnstr(largestring, smallstring, 8));
	printf("   strnstr: %p\n", strnstr(largestring, smallstring, 8));
	printf("\nft_strnstr: %p\n", ft_strnstr(largestring, smallstring, 2));
	printf("   strnstr: %p\n", strnstr(largestring, smallstring, 2));
	printf("\nft_strnstr: %p\n", ft_strnstr(largestring, smallstring, 40));
	printf("   strnstr: %p\n", strnstr(largestring, smallstring, 40));



return (1);	
}
