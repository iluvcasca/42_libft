/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:56:48 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 15:07:33 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strrchr(const char *s, int c){
    int i = 0;
    char *ptr = 0;
    while (s[i])
    {
        if (s[i] == c ) 
            ptr = (char*)(s + i);
        i++;
    }
   if (s[i] == c ) 
        ptr = (char*)(s+i);
    return ptr;
}

//#include <string.h>
//#include <stdio.h>
//int main(){
//    char * str = "hel\0lo";
//    printf("   strrchr: %p\n", strrchr(str,'0'));
//    printf("ft_strrchr: %p\n", ft_strrchr(str,'0'));
//    return 1;
//}
