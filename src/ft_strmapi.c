#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char    *res;
    int     i;
    unsigned int j;

    i = 0;
    j = 0;
    if (s && f)
    {
        res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
        if (!res)
            return (NULL);
        while (s[i])
        {
            res[i] = f(j, s[i]);
            i++;
            j++; 
        }
        res[i] = '\0';
        return (res);
    }
    return (NULL);
}
