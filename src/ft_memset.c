#include "libft.h"

void *ft_memset(void *p, int val, size_t ln)
{
	size_t	i;
	char	*ptr;

	ptr = p;
	i = 0;

	while(i<ln)
		ptr[i++] = val;
	return (ptr);
}
