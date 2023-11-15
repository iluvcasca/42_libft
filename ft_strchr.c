/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:44:54 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 16:19:16 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}

//#include <string.h>
//#include <stdio.h>
// int main (){
//    char * str= "ilove42";
//    char * str1 = "";
//    printf("   strchr: %p\n", strchr(str, '4'));
//    printf("ft_strchr: %p\n", ft_strchr(str, '4'));
//    printf("\n   strchr: %p\n", strchr(str, '\0'));
//    printf("ft_strchr: %p\n", ft_strchr(str, '\0'));
//    printf("\n   strchr: %p\n", strchr(str1, 0));
//    printf("ft_strchr: %p\n", ft_strchr(str1, 0));
//    printf("\n   strchr: %p\n", strchr(str, '4' + 256));
//    printf("ft_strchr: %p\n", ft_strchr(str, '4' + 256));
//    return (1);
//}
