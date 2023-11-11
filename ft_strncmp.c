/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:08:58 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 18:58:12 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
    int i = 0;
    while (n > 0)
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        n--;
        i++;
    }
    return (0);
}

//#include <string.h>
//#include <stdio.h>
//int main() {
//    char *str = "hello 42";
//    char *str2 = "hello 42";
//    printf("   strncmp: %i\n", strncmp(str, str2, strlen(str)));
//    printf("ft_strncmp: %i\n", ft_strncmp(str, str2, strlen(str)));
//    return (1);
//}

