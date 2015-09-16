#include "libft.h"

char    *ft_strmap(const char *s, char (*f)(char))
{
    char    *res;
    int     i;

    i = 0;
    if (s && f)
    {
        res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
        if (!res)
            return (NULL);
        while (s[i])
        {
            res[i] = f(s[i]);
            i++;
        }
        res[i] = '\0';
        return (res);
    }
    return (NULL);
}
