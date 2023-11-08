/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:06:28 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/08 14:46:54 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n){
    unsigned char *ptr;
    ptr = (unsigned char *)s;
    while (n > 0)
    {
        *ptr = (unsigned char) c;
        ptr++;
        n--;
    }
    return s;
}

int main() {
    char buffer[21];
    buffer[20] = '\0';
    
    ft_memset(buffer, 'k', 10);
    ft_memset(buffer + 10, 'o', 10);
    printf("ft_memset: %s\n", buffer); 
    memset(buffer, 'o', 10);
    memset(buffer+10, 'k', 10);
    printf("   memset: %s\n", buffer); 
}

