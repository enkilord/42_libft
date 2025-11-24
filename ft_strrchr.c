/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:53:17 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/22 13:50:14 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Finds the last occurrence of a character in a string. */
char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	last = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = (char *)(s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (last);
}
