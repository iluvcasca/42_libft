/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:38:27 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/13 17:01:38 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char **ft_split(char const *s, char c ){
    size_t i;
    size_t l_s;
    char *s_cpy;
    char **split;

    i = 0;
    l_s = ft_strlen(s);
    s_cpy = malloc(sizeof(char)*(l_s + 1));
    ft_strlcpy(s_cpy, s, l_s + 1);



}
