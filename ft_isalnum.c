/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:26:03 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/07 22:40:03 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c) {
  if ((c >= '0' && c <= '9') || ((c >= 'A' && c <= 'Z') || (c>= 'a' && c <= 'z')))
    return (c);
  else
    return (0);
}

int main() {
  char input;
  while (1) {
    scanf("%c%*c", &input);
    printf("\n");
    printf("isalnum: %c: %s\n", input,
           isalnum((unsigned char)input) ? "success" : "failure"
           );
    printf("ft_isalnum: %c: %s\n\n", input,
           ft_isalnum((unsigned char)input) ? "success" : "failure");
  }
}
