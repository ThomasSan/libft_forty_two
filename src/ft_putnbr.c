#include "libft.h"

void    ft_putnbr(int n)
{
    if (n < 0)
    {
        n = -n;
        ft_putchar('-');
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
    ft_putchar(n + '0');
}
