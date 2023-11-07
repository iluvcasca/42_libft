/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:52:48 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/07 10:49:08 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int character) {
  if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
    return (character);
  else
    return 0;
}

int main() {
  char input;
  while (1) {
    scanf("%c", &input);
    printf("\n");
    printf("isalpha: %c: %s\n", input, isalpha(input) ?  "success" : "failure");
    printf("ft_isalpha: %c: %s\n", input, ft_isalpha(input) ? "success" : "failure");
    scanf("%c", &input);
  }
  return (0);
}
