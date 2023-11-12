/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:48:58 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/12 16:30:25 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
  size_t src_len;
  size_t i;
  src_len = ft_strlen(src);
  i = 0;
  if (!dstsize)
    return src_len;
  while (dstsize > 1 && src[i]) {
    dst[i] = src[i];
    dstsize--;
    i++;
  }
  dst[i] = '\0';
  return (src_len);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main() {
//   char src[] = "hello";
//   char dst[6];
//   memset(dst, '6',6);
//   printf("size_t: %zu\n", ft_strlcpy(dst, src, 0));
//   printf("dst: %c\n", *dst);
//   printf("\nsize_t: %zu\n", strlcpy(dst, src, 0));
//   printf("dst: %c\n", *dst);
//
//   // printf("\nsize_t: %zu\n", ft_strlcpy(dst, src, -1));
//   // printf("dst: %c\n", *dst);
//   printf("\nsize_t: %zu\n", strlcpy(dst, src, -1));
//   printf("dst: %s\n", dst);
//
//   return (1);
// }
