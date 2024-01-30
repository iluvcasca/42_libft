/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:26:15 by kgriset           #+#    #+#             */
/*   Updated: 2024/01/30 12:00:39 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	l_s;

	l_s = ft_strlen(s);
	write(fd, s, l_s * sizeof(char));
	write(fd, "\n", sizeof(char));
}
