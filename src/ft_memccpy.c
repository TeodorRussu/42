#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *d;
	char *s;
	size_t i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;

	while (i < n)
	{
		d[i] = s[i];
		i++;
		if (s[i - 1] == c)
			return (dest+i);
	}
	return (NULL);
}
