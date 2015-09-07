#include "libft.h"

void    ft_putendl(const char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
    ft_putchar('\n');
}
