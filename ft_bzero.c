/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:05:08 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/22 13:53:04 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Sets a block of memory to zero. */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *)s;
	while (n > 0)
	{
		*(temp_ptr++) = 0;
		n--;
	}
}
