/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:11:17 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/09 10:48:02 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n) {
  char temp[n];
  char *cpy = (char *)dest;
  size_t i = 0;
  while (i < n) {
    temp[i] = *(char *)src;
    src++;
    i++;
  }
  src -= n;
  i = 0;
  while (i < n) {
    *cpy = temp[i];
    cpy++;
    i++;
  }

  return dest;
}

int main() {
  char str[15] = "Hello42";
  memmove(str + 5, str, 8);
  printf("memmove: %s\n", str);
  char str2[15] = "Hello42";
  ft_memmove(str2 + 5, str2, 8);
  printf("ft_memmove: %s\n", str2);
  return (1);
}
