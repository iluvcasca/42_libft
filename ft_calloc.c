/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:00:33 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/10 14:20:34 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n) {
  unsigned char *ptr = (unsigned char *)s;
  while (n > 0) {
    *ptr = '\0';
    ptr++;
    n--;
  }
}

void *ft_calloc(size_t nmemb, size_t size) {
  if (!nmemb || !size)
    return malloc(0);
  else if (nmemb >= (size_t)-1 / size)
    return (0);
  else {
    void *ptr = malloc(nmemb * size);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
  }
}

int main() {
  printf("overflow:\n");
  void *p1 = calloc((size_t)-1, (size_t)-1);
  printf("   calloc: %p\n", p1);
  free(p1);
  void *p2 = ft_calloc((size_t)-1, (size_t)-1);
  printf("ft_calloc: %p\n", p2);
  free(p2);
  printf("zero:\n");
  void *p3 = calloc(0, (size_t)-1);
  printf("   calloc: %p\n", p3);
  free(p3);
  void *p4 = ft_calloc(0, (size_t)-1);
  printf("ft_calloc: %p\n",p4);
  free(p4);
  printf("both zero\n");
  void *p5 = calloc(0, 0);
  printf("   calloc: %p\n", p5);
  p5 = ft_calloc(0, 0);
  printf("ft_calloc: %p\n",p5);
  free(p5);

  printf("SIZE_T_MAX: %zu\n",(size_t)-1);
  return (1);
}
