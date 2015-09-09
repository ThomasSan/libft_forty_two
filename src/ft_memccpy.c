#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned int    i;
    char            *tmp_dest;
    const char      *tmp_src;

    i = 0;
    tmp_dest = (char *) dest;
    tmp_src = (const char *) src;
    while (i < n && tmp_src[i] != (char) c)
    {
        tmp_dest[i] = tmp_src[i];
        i++;
    }
    if (i == n)
        return (NULL);
    if (tmp_src[i] == (char) c)
    {
        tmp_dest[i] = tmp_src[i];
        i++;
    }
    return (dest + i);
}
