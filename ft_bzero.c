/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:05:08 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/24 20:28:59 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Sets a block of memory byte by byte to zero.
void	ft_bzero(void *s, size_t n)
{	
	ft_memset(s, 0, n);
}
