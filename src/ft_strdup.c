#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *dst;
    int     i;
    int     len;

    i = 0;
    len = ft_strlen(s);
    dst = (char *)malloc(sizeof(char) * (len + 1));
    if (!dst)
        return (NULL);
    while (s[i])
    {
        dst[i] = s[i];
        i++;
    }
    return (dst);
}
