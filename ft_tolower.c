/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:43:21 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/09 13:43:55 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c) {
  if (c >= 'A' && c <= 'Z')
    return (c + ('a' - 'A'));
  else
    return c;
}

int main(){
    unsigned char input;
    while (1)
    {
        scanf( "%c%*c", &input);
        printf("tolower: %c\n", tolower((int) input));
        printf("ft_tolower: %c\n", ft_tolower((int) input));
    }
    return (1);
}
