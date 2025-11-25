/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:00:06 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/24 21:34:41 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n bytes from memory area src to memory area dest
// But safely handling overlapping.
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (d > s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dst);
}
