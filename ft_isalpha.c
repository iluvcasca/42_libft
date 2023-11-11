/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:52:48 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 15:03:42 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c) {
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return (c);
  else
    return 0;
}

#include <ctype.h>
#include <stdio.h>
int main() {
  char input;
  while (1) {
    scanf("%c%*c", &input);
    printf("\n");
    printf("isalpha: %c: %s\n", input, isalpha((unsigned char) input) ?  "success" : "failure");
    printf("ft_isalpha: %c: %s\n\n", input, ft_isalpha((unsigned char) input) ? "success" : "failure");
  }
  return (0);
}
