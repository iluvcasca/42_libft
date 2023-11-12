/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:54:03 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/12 16:48:13 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char*src, size_t size){
    size_t l_dst;
    size_t l_src;
    
    l_src = ft_strlen(src);
    l_dst = 0;
    while (dst[l_dst] && l_dst != size)
        l_dst++;
    if ( l_dst != size && size) 
        ft_strlcpy(dst + l_dst, src,size - l_dst);

    return (l_dst + l_src);
}

//#include <bsd/string.h>
//#include <stdio.h>
//int main ()
//{
//    char dst[30];
//    memset(dst, 0 , 30);
//    dst[0] = 'X';
//    char dst1[30] = "Hello";
//    char *src = "world";
//    printf("size: %zu dst: %s\n",ft_strlcat(dst, src, 0), dst);
//    strlcat(dst1 , src, 10);
//    printf("dst1: %s\n", dst1);
//    return (1);
//}
