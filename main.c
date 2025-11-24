/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmahatsa <vmahatsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:10:02 by vmahatsa          #+#    #+#             */
/*   Updated: 2025/11/22 16:12:48 by vmahatsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = "HelloWolrd42";
	char buffer[50];
	/* -------------------- Test ctype -------------------- */
	printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
	printf("ft_isdigit('1') = %d\n", ft_isdigit('1'));
	printf("ft_isalnum('@') = %d\n", ft_isalnum('@'));
	printf("ft_isascii(128) = %d\n", ft_isascii(128));
	printf("ft_isprint(32) = %d\n", ft_isprint(32));
	printf("ft_toupper('a') = %c\n", ft_toupper('a'));
	printf("ft_tolower('B') = %c\n", ft_tolower('B'));

	/* -------------------- Test string -------------------- */
	printf("ft_strlen(\"%s\") = %zu\n", s1, ft_strlen(s1));

	ft_memset(buffer, 'A', 10);
	buffer[10] = '\0';
	printf("ft_memset -> %s\n", buffer);

	ft_bzero(buffer, 10);
	printf("ft_bzero -> '%s'\n", buffer);

	char src[] = "12345";
	char dest[10];
	ft_memcpy(dest, src, 6);
	printf("ft_memcpy -> %s\n", dest);

	char overlap[] = "abcdef";
	ft_memmove(overlap + 2, overlap, 4);
	overlap[6] = '\0';
	printf("ft_memmove -> %s\n", overlap);

	ft_strlcpy(buffer, "CopyThis", sizeof(buffer));
	printf("ft_strlcpy -> %s\n", buffer);

	ft_strlcat(buffer, "Plus", sizeof(buffer));
	printf("ft_strlcat -> %s\n", buffer);

	printf("ft_strchr -> %s\n", ft_strchr(s1, 'e'));

	printf("ft_strrchr -> %s\n", ft_strrchr(s1, 'l'));

	printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd",
			2));

	printf("ft_memchr -> %s\n", (char *)ft_memchr(s1, 'l', 5));

	printf("ft_memcmp(\"abc\", \"abd\", 3) = %d\n", ft_memcmp("abc", "abd", 3));

	printf("ft_strnstr(\"Hello World\", \"World\", 11) = %s\n",
		ft_strnstr("Hello World", "World", 11));

	/* -------------------- Test conversion -------------------- */
	printf("ft_atoi(\"1234\") = %d\n", ft_atoi("1234"));

	return (0);
}