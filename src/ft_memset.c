#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
    unsigned int	i;
    char            *tmp;

    i = 0;
    tmp = (char *)str;
    while (i < n)
    {
        tmp[i] = c;
        i++;
    }
    return (tmp);
}
