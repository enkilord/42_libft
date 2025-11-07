#include "libft.h"

int ft_isalnum(int c)
{
    //if (ft_isalpha(c) || ft_isdigit(c))
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))  
        return (c);
    return (0);
}