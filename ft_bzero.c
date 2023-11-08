/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:49:58 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/08 15:12:05 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void ft_bzero (void *s, size_t n){
   unsigned char *ptr = (unsigned char *)s;
    while (n>0)
    {
        *ptr = '\0';
        ptr++;
        n--;
    }
}

int main() {
    
}
