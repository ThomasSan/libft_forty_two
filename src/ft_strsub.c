#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char            *res;
    unsigned int    i;

    i = 0;
    if (s && len > 0)
    {
        res = (char *)malloc(sizeof(char) * (len));
        if (!res)
            return (NULL);
        while (len > 0)
        {
            res[i] = s[start + i];
            i++;
            len--;
        }
        return (res);
    }
    return (NULL);
}
