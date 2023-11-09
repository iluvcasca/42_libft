/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:48:58 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/09 13:26:19 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// size_t strlcpy(char * dst, const char * src, size_t dstsize){
//     size_t i = dstsize;
//     while (i > 1)
//     {
//         *dst = *src;
//         dst++;
//         src++;
//         i--;
//     }
//     *dst = '\0';
//     return (;
// }

int main(){
    char src[] = { 'h', 'e', 'l', 'l', 'o' };
    char dst[6];
    printf("size_t: %zu\n", strlcpy (dst, src, 5));
    printf("dst: %s\n", dst);
    return (1);
}
