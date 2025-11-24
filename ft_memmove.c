/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:00:06 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/24 16:12:52 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies memory safely handling overlapping regions.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*count_src;
	unsigned char		*count_dst;
	size_t				i;

	if (!src && !dst)
		return (NULL);
	count_src = (unsigned char *)src;
	count_dst = (unsigned char *)dst;
	i = 0;
	if (count_dst > count_src)
	{
		while (len-- > 0)
		{
			count_dst[len] = count_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			count_dst[i] = count_src[i];
			i++;
		}
	}
	return (dst);
}
