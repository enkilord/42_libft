/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:39:36 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/24 22:49:06 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// duplicat a string in a new memory area / buffer (dup)
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len + 1);
	return (dup);
}
