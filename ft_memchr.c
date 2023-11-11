/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:19:41 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 15:04:01 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memchr(const void *s, int c, size_t n){ 
    unsigned int i = 0;
    while (n > 0)
    {
       if (((unsigned char *)s)[i] == (unsigned char) c )
            return ((void*)(s+i));
        n--;
        i++;
    }
    return (0);
}

#include <string.h>
#include <stdio.h>
int main () {
    int array[3] = { 134, 43434343, 43};
    printf("   memchr: %p\n", memchr(array, 43, 3*sizeof(int)));
    printf("ft_memchr: %p\n", ft_memchr(array, 43, 3 * sizeof(int)));

    return (1);
}
