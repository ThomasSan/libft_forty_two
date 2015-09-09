#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void    ft_bzero(void *str, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memset(void *str, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void    ft_putchar(char c);
void    ft_putnbr(int n);
void    ft_putstr(const char *str);
void    ft_putendl(const char *str);
size_t  ft_strlen(const char *str);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strdup(const char *s);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, const char *src, size_t n);

#endif
