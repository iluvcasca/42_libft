/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:54:03 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 15:11:50 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char*src, size_t size){
    size_t l_dst;
    size_t l_src;
    
    l_src = ft_strlen(src);
    l_dst = 0;
    if (!size)
	    return l_src;
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
//    char *src = "";
////    printf("size: %zu dst: %s\n",ft_strlcat(NULL, NULL, 0), dst);
//    strlcat(NULL , NULL, 0);
//    printf("dst1: %s\n", dst1);
//    return (1);
//}
