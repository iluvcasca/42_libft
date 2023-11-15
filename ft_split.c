/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:38:27 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 17:04:40 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static void	free_split(char **split, char *s_trimmed, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(split[i]);
		i++;
	}
	free(s_trimmed);
	free(split);
}

static char	*count_split(const char *s, char c, size_t *sub_str_count)
{
	char	set[2];
	char	*s_trimmed;
	size_t	i;

	i = 0;
	*sub_str_count = 1;
	set[0] = c;
	set[1] = '\0';
	s_trimmed = ft_strtrim(s, set);
	if (!s_trimmed)
		return (NULL);
	if (*s_trimmed == 0)
		(*sub_str_count)--;
	while (s_trimmed[i])
	{
		if (s_trimmed[i] == c && s_trimmed[i + 1] != c)
			(*sub_str_count)++;
		i++;
	}
	return (s_trimmed);
}

static char	**make_split(char **split, char *s_trimmed, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (s_trimmed[i])
	{
		start = i;
		while (s_trimmed[i] != c && s_trimmed[i])
			i++;
		split[j] = ft_substr(s_trimmed, start, i - start);
		if (!split[j])
		{
			free_split(split, s_trimmed, j + 1);
			return (NULL);
		}
		j++;
		while (s_trimmed[i] == c && c != '\0')
			i++;
	}
	split[j] = NULL;
	free(s_trimmed);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	sub_str_count;
	char	**split;
	char	*s_trimmed;

	s_trimmed = count_split(s, c, &sub_str_count);
	split = malloc(sizeof(char *) * (sub_str_count + 1));
	if (!split)
	{
		free(s_trimmed);
		return (NULL);
	}
	return (make_split(split, s_trimmed, c));
}

// #include <stdio.h>
// int main ()
// {
//     size_t i = 0;
//     char ** split = ft_split("", ' ');
//     while (split[i])
//     {
//         printf("%s\n", split[i]);
//         free(split[i]);
//         i++;
//     }
//     free(split);
//     return (1);
// }
