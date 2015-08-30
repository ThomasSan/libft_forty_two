#include <unistd.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int    i;
    char            *tmp_dest;
    const char      *tmp_src;

    i = 0;
    tmp_dest = (char *)dest;
    tmp_src = (const char *)src;
    while (i < n)
    {
        tmp_dest[i] = tmp_src[i];
        i++;
    }
    return (tmp_dest);
}
