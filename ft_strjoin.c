/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:23:02 by kgriset           #+#    #+#             */
/*   Updated: 2024/01/30 12:00:59 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l_s1;
	size_t	l_s2;
	char	*j_string;

	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	j_string = malloc((l_s2 + l_s1) * sizeof(char) + sizeof(char));
	if (!j_string)
		return (NULL);
	ft_strlcpy(j_string, s1, l_s1 + 1);
	ft_strlcpy(j_string + l_s1, s2, l_s2 + 1);
	return (j_string);
}
