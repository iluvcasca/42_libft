/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:16:20 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/12 17:33:47 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len){
    size_t l_little;
    size_t l_big;
    size_t i;

    l_little = ft_strlen (little);
    l_big = ft_strlen (big);
    i = 0;
    if (!little[i])
        return ((char *)big);
    while (big[i] && i != len)
    {
        if (i + l_little > l_big)
            return (NULL);
        else if (!ft_strncmp(big + i, little, l_little))
            return ((char *)big + i);
        i++;
    }
    return (NULL);
}

//#include <bsd/string.h>
//#include <stdio.h>
//
//int main() {
//	const char *largestring = "Foo Bar Baz";
//        const char *smallstring = "Bar";	
//	printf("ft_strnstr: %p\n", ft_strnstr(largestring, smallstring, 4));
//	printf("   strnstr: %p\n", strnstr(largestring, smallstring, 4));
//	printf("\nft_strnstr: %p\n", ft_strnstr(largestring, smallstring, 8));
//	printf("   strnstr: %p\n", strnstr(largestring, smallstring, 8));
//	printf("\nft_strnstr: %p\n", ft_strnstr(largestring, smallstring, 2));
//	printf("   strnstr: %p\n", strnstr(largestring, smallstring, 2));
//	printf("\nft_strnstr: %p\n", ft_strnstr(largestring, smallstring, 40));
//	printf("   strnstr: %p\n", strnstr(largestring, smallstring, 40));
//   	printf("\nft_strnstr: %p\n", ft_strnstr("aaabcabcd", "cd", 8));
//	printf("   strnstr: %p\n", strnstr("aaabcabcd", "cd", 8));
//
//
//
//
//return (1);	
//}
