#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  len1;
    size_t  len2;
    char    *res;
    int     i;

    i = 0;
    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    res = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (!res)
        return (NULL);
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        res[len1 + i] = s2[i];
        i++;
    }
    res[len1 + i] = '\0';
    return (res);
}
