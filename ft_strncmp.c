/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:08:58 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 12:42:12 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
    size_t i = 0;
    while (s1[i] == s2[i] && i < n-1 && s1[i] && s2[i])
	    i++;
    if (n)
	    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    else
	    return 0;
}

//#include <string.h>
//#include <stdio.h>
//Int main() {
//    char *str = "hello 42";
//    char *str2 = "hello 42a";
//    printf("   strncmp: %i\n", strncmp(str, str2, strlen(str)));
//    printf("ft_strncmp: %i\n", ft_strncmp(str, str2, strlen(str)));
//    return (1);
//}

