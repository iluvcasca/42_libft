/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:29:40 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 15:03:15 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_toupper(int c) {
  if (c >= 'a' && c <= 'z')
    return (c - ('a' - 'A'));
  else
    return c;
}

#include <ctype.h>
#include <stdio.h>
int main(){
    unsigned char input;
    while (1)
    {
        scanf( "%c%*c", &input);
        printf("toupper: %c\n", toupper((int) input));
        printf("ft_toupper: %c\n", ft_toupper((int) input));
    }
    return (1);
}
