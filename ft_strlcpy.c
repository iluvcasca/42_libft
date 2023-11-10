/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:48:58 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/10 16:21:19 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

 size_t ft_strlcpy(char * dst, const char * src, size_t dstsize){
	 size_t src_len;
src_len = 0;
	while(src[src_len])
		src_len++;
     while (dstsize > 0)
     {
         *dst = *src;
         dst++;
         src++;
         dstsize--;
     }
     *dst = '\0';
     return (src_len);
 }

int main(){
    char src[] = "hello"; 
    char dst[6];
    printf("size_t: %zu\n", ft_strlcpy (dst, src, 5));
    printf("dst: %s\n", dst);
    return (1);
}
