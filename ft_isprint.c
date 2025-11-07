#include "libft.h"

int ft_isprint(int c)
{
    //if(c >= space && c <= delete)
    if(c >= 32 && c <= 126)
        return (c);
    return (0);
}