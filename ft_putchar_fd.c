/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:33:37 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/24 16:10:40 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putchar_f -- Writes a character on a file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
