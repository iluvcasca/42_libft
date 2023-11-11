/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:54:03 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 18:57:57 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char*src, size_t size){
    size_t i = 0;
    size_t j = 0;
    size_t l_dst = 0;
    size_t l_src = 0;

    while (dst[i] && i != size)
        i++;
    l_dst = i;
    if (i == size)
        return (l_dst);
    else
    {
        while (src[j])
            j++;
        l_src = j;
        j = 0;
        while (size - i - 1> 0 && src[j])
        {
            dst[i] = src[j];
            j++;
            i++;
        }
        dst[i] = '\0';
        return l_dst + l_src; 
    }
}

//#include <bsd/string.h>
//#include <stdio.h>
//int main ()
//{
//    char dst[30] = "Hello";
//    char dst1[30] = "Hello";
//    char src[2] = {'4','2'};
//    ft_strlcat( dst, src, 10);
//    printf("dst: %s\n", dst);
//    strlcat(dst1 , src, 10);
//    printf("dst1: %s\n", dst1);
//    return (1);
//}
