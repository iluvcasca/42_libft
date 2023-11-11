/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:49:58 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 15:08:26 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_bzero (void *s, size_t n){
   unsigned char *ptr = (unsigned char *)s;
    while (n>0)
    {
        *ptr = '\0';
        ptr++;
        n--;
    }
}

#include <string.h>
#include <stdio.h>
int main() {
   char str1[] = "0123456789";
    char str2[] = "0123456789";
    ft_bzero (str1 + 8, 2);
    printf("ft_bzero: %s\n", str1);
    bzero (str2 + 8, 2);
    printf("bzero: %s\n", str2);
    return (1);
}
