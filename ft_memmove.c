/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:11:17 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 18:57:19 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



void *ft_memmove(void *dest, const void *src, size_t n) {
	size_t i;
	unsigned int overlap = 0;
	if (dest == src)
	       return dest;	
	//else if (dest < src && dest+n >= src)
	//	overlap = 1;
	else if (dest > src && src+n >= dest)
		overlap = 2;
	if (overlap == 2)
	{
		while (n>0)
		{
			i = n-1;
			*(unsigned char*)(dest+i) = *(unsigned char*)(src+i);
			n--;
		}
		return (dest);

	}
	else
		return (ft_memcpy(dest,src,n));		

      return dest;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char str[15] = "Hello42";
  memmove(str + 5, str, 8);
  printf("   memmove: %s\n", str);
  char str2[15] = "Hello42";
  ft_memmove(str2 + 5, str2, 8);
  printf("ft_memmove: %s\n", str2);
  return (1);
}
