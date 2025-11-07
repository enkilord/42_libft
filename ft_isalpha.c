#include "libft.h"

int ft_isalpha (int c)
{
    //if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (c);
    return(0);
}