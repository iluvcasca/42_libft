/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:25:12 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/11 18:58:38 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len){
	size_t i = 0;
	char * sub;
	while (s[start + i] && i != len)
		i++;
	sub = malloc(i*sizeof(char)+1);
	if (!sub)
		return (NULL);
	else
	{
		i = 0;
		while (s[start + i] && i != len)
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = '\0';
		return (sub);
	}
}

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	char *str = "Hello 42";
	char *sub = ft_substr(str, 0, 5);
	printf("%s\n",sub);
	free(sub);
	return (1);
}
