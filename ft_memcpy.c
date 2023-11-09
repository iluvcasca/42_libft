/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:55:04 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/09 10:01:18 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *memcpy(void *dest, const void *src, size_t n){
    char *ptr = dest;
    while (n>0)
    {
        *ptr = *(char *)src;
        ptr++;
        src++;
        n--;
    }
    return (dest);
}

int main(){
    char *str = "Hello 42";
    char *dest = (char*)malloc(strlen(str)+1);
    dest = (char*) memcpy((void*)dest,(void*)str,9);
    char *dest2 = (char*)malloc(strlen(str)+1);
    dest2 = (char*) memcpy((void*)dest2,(void*)str,9);
    printf("memcpy: %s\n", dest);
    printf("ft_memcpy: %s\n", dest2);
    free(dest);
    free(dest2);
}
