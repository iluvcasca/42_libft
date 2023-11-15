/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:17:26 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 15:38:29 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*f_string;
	unsigned int	l_s;

	l_s = ft_strlen(s);
	f_string = malloc(sizeof(char) * (l_s + 1));
	if (!f_string)
		return (NULL);
	l_s = 0;
	while (s[l_s])
	{
		f_string[l_s] = (*f)(l_s, s[l_s]);
		l_s++;
	}
	f_string[l_s] = '\0';
	return (f_string);
}
