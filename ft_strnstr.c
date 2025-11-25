/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:55:17 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/24 20:08:47 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Locates a substring within a string, limited by length.
char	*ft_strnstr(const char *str, const char *sub_str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*sub_str)
		return ((char *)str);
	while (str[i] && i < len)
	{
		while (str[i + j] == sub_str[j] && len < (i + j))
		{
			if (!sub_str[j + 1])
				j++;
		}
		i++;
	}
	return (NULL);
}
