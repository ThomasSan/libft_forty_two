#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void    ft_bzero(void *str, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memset(void *str, int c, size_t n);
void    ft_putchar(char c);
void    ft_putnbr(int n);
void    ft_putstr(const char *str);
void    ft_putendl(const char *str);
size_t  ft_strlen(const char *str);

#endif
