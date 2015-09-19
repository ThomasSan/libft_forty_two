#include "libft.h"

char    *ft_strtrim(char const *s)
{
    int     i;
    int     j;
    int     k;
    char    *res;

    i = 0;
    if (!s)
        return (NULL);
    j = (int)ft_strlen(s);
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    res = (char *)malloc(sizeof(char) * (j - i + 1));
    if (!res)
        return (NULL);
    while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t' || s[j] == '\0')
        j--;
    k = 0;
    while (i <= j)
    {
        res[k] = s[i];
        k++;
        i++;
    }
    res[k] ='\0';
    return (res);
}
