/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:10:09 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 12:24:07 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isprint(int c) {
  if (c >= ' ' && c <= '~')
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
//    printf("isprint: %c: %s\n", input,
//           isprint((unsigned char)input) ? "success" : "failure"
//           );
//    printf("ft_isprint: %c: %s\n\n", input,
//           ft_isprint((unsigned char)input) ? "success" : "failure");
//  }
//}
