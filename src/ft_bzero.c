#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;
	char *tmp;

	i = 0;
	tmp = (char*)str;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}
