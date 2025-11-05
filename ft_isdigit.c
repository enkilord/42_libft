#include "libft.h"

int ft_isidgit (int c)
{
    if (c >= 48 && c <= 57)
        return (c);
    return (0);
}