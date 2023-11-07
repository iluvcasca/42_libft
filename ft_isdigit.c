/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:46:15 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/07 22:39:30 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c) {
  if (c >= '0' && c <= '9')
    return (c);
  else
    return (0);
}

int main() {
  char input;
  while (1) {
    scanf("%c%*c", &input);
    printf("\n");
    printf("isdigit: %c: %s\n", input,
           isdigit((unsigned char)input) ? "success" : "failure"
           );
    printf("ft_isdigit: %c: %s\n\n", input,
           ft_isdigit((unsigned char)input) ? "success" : "failure");
  }
}
