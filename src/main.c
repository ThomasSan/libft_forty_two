#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_memcpy(void *s, const void *src, size_t n);
void    ft_bzero(void *s, size_t n);

int		main(void)
{
    const char str[14] = "salut ca va ?";
    const char str2[14] = "salut ca va ?";
    char dest[14];
    char dest2[14];
    int i = 0;

    ft_bzero(dest, 14);
    ft_bzero(dest2, 14);
    while (i < 14)
    {
    memcpy(dest, str, i);
    ft_memcpy(dest2, str2, i);
    puts(dest);
    puts(dest2);
    puts("\n");
    i++;
    }
    return (0);
}
