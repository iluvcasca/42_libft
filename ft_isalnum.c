/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:26:03 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 15:04:20 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalnum(int c) {
  if ((c >= '0' && c <= '9') || ((c >= 'A' && c <= 'Z') || (c>= 'a' && c <= 'z')))
    return (c);
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
//    printf("isalnum: %c: %s\n", input,
//           isalnum((unsigned char)input) ? "success" : "failure"
//           );
//    printf("ft_isalnum: %c: %s\n\n", input,
//           ft_isalnum((unsigned char)input) ? "success" : "failure");
//  }
//}
