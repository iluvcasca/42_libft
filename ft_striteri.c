/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:39:07 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/14 17:43:11 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char*)){
    unsigned int i;
    
    i = 0;
    while(s[i])
    {
        (*f)(i,&s[i]);
        i++;
    }
}
