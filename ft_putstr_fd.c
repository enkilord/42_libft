/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:33:51 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/22 21:11:58 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putstr_fd -- write a string on a specified file descriptor
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (NULL);
	while (*s)
		ft_putchar_fd(*s, fd);
	s++;
}
