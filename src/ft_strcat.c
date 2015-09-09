#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    unsigned int    i;
    int             len;

    i = 0;
    len = ft_strlen(dest);
    while (src[i])
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}
