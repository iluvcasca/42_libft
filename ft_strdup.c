/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:42:54 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 15:06:11 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strdup(const char *s){
    char *s_dupe;
    unsigned int i = 0;
    while (s[i])
        i++;
    s_dupe = malloc((i+1) * sizeof(char));
    if (!s_dupe)
        return 0;
    i = 0;
    while (s[i])
    {
        s_dupe[i] = s[i];
        i++;
    }
    s_dupe[i] = s[i];
    return s_dupe;
}

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main () {
    char * str = "hello 42";
    char * str_dup = ft_strdup(str);
    char * str_dup1 = strdup(str);
    printf("original: %s\n", str);
    printf("ft_strdup: %s\n", str_dup);
    printf("   strdup: %s\n", str_dup1);
    free(str_dup);
    free(str_dup1);
    return (1);
}
