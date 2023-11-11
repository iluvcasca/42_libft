/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:44:54 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 15:06:43 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strchr(const char *s, int c){
    int i = 0;
    while (s[i]){
        if (s[i] == c )
            return (char*)(s+i);
        i++;
    }
    if (s[i] == c) 
        return (char *)(s+i);
    return (0);
}

//#include <string.h>
//#include <stdio.h>
//int main (){
//    char * str= "ilove42";
//    printf("   strchr: %p\n", strchr(str, '4'));
//    printf("ft_strchr: %p\n", ft_strchr(str, '4'));
//    return (1);
//}
