/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:46:59 by kgriset           #+#    #+#             */
/*   Updated: 2024/01/30 12:01:03 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	find_l_trimmed(char const *s1, char const *set,
		size_t *l_trim_beg)
{
	size_t	l_s1;
	size_t	l_trim_end;
	size_t	l_trimmed;
	size_t	i;

	i = 0;
	l_trimmed = 0;
	*l_trim_beg = 0;
	l_trim_end = 0;
	l_s1 = ft_strlen(s1);
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	*l_trim_beg = i;
	if (i != l_s1)
	{
		i = l_s1 - 1;
		while (s1[i] && ft_isinset(s1[i], set))
			i--;
		l_trim_end = l_s1 - 1 - i;
	}
	l_trimmed = l_s1 - *l_trim_beg - l_trim_end;
	return (l_trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	l_trimmed;
	size_t	l_trim_beg;

	l_trimmed = find_l_trimmed(s1, set, &l_trim_beg);
	trimmed = malloc(l_trimmed * sizeof(char) + sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + l_trim_beg, l_trimmed + 1);
	return (trimmed);
}

//#include <stdio.h>
// int main(){
//     printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
//     printf("%s\n", ft_strtrim("tripouille   xxx", " x"));
//     return (1);
// }
