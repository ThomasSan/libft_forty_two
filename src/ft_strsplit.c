#include "libft.h"

int     count_word(const char *str, char c)
{
    int     nb;
    int     i;

    nb = 0;
    i = 0;
    while (str[i])
    {
        if (str[i - 1] == c && str[i] != c)
        {
            nb++;
        }
        i++;
    }
    if (str[0] != c)
        nb++;
    return (nb);
}

int     *size_word(const char *str, char c, int t)
{
    int     n;
    int     i;
    int     *tab;

    i = 0;
    tab = (int *)malloc(sizeof(int) * t);
    if (!tab)
        return (NULL);
    while (*str != '\0')
    {
        n = 0;
        while (*str == c && *str)
            str++;
        while (*str != c && *str)
        {
            str++;
            n++;
        }
        tab[i] = n;
        i++;
    }
    return (tab);
}

char    **copy_split(char **dst, char const *src, char c, int x)
{
    int     i;
    int     j;

    i = 0;
    while (i < x)
    {
        j = 0;
        while (*src == c && *src)
            src++;
        while (*src != c && *src)
        {
            dst[i][j] = *src;
            j++;
            src++;
        }
        dst[i][j] = '\0';
        i++;
    }
    return (dst);
}

char    **ft_strsplit(char const *s, char c)
{
    char    **tab;
    int     word;
    int     i;
    int     *t;

    i = 0;
    word = count_word(s, c);
    t = size_word(s, c, word);
    tab = (char **)malloc(sizeof(char) * word);
    if (!tab)
        return (NULL);
    if (!s || !c)
        return (NULL);
    while (i < word)
    { 
        tab[i] = (char *)malloc(sizeof(char) * (t[i] + 1));
        if (tab[i] == NULL)
            return (NULL);
        i++;
    }
    tab = copy_split(tab, s, c, word);
    return (tab);
}
