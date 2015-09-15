#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void            *mem;

    mem = (void *)malloc(sizeof(void) * (size));
    if (!mem)
        return (NULL);
    ft_memset(mem, 0, size);
    return (mem);
}
