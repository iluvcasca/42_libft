/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:52:35 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 15:05:45 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_isascii(int c) {
  if (c >= 0 && c <= 127)
    return (c + 1);
  else
    return (0);
}

//#include <ctype.h>
//#include <stdio.h>
//int main() {
//  char input;
//  while (1) {
//    scanf("%c%*c", &input);
//    printf("\n");
//    printf("isascii: %c: %s\n", input,
//           isascii((unsigned char)input) ? "success" : "failure"
//           );
//    printf("ft_isascii: %c: %s\n\n", input,
//           ft_isascii((unsigned char)input) ? "success" : "failure");
//  }
//}
