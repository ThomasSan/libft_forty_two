#include "libft.h"

char    *ft_strstr(const char *str, const char *sub)
{
    int i;
    int j;

    i = 0;
    if (*sub == '\0')
        return ((char *)str);
    while (str[i])
    {
        j = 0;
        while (str[i + j] == sub[j] && sub[j])
            j++;
        if(!sub[j])
            return ((char *)str + i);
        i++;
    }
    return (NULL);
}
