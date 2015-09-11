#include "libft.h"

int     ft_atoi(const char *str)
{
    int     sign;
    int     val;
    int     nb;

    sign = 1;
    val = 0;
    nb = 0;
    while (*str == ' ' || *str == '\v' || *str == '\t' ||
            *str == '\n' || *str == '\r' || *str == '\f')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        nb = (int) *str - '0';
        val = (val * 10) + nb;
        str++;
    }
    return (val * sign);
}
