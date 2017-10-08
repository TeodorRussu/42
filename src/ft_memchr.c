#include "libft.h"

void *ft_memchr(const void *src, int c, size_t n)
 {
	unsigned char *s;
	size_t i;

	s = (unsigned char *)src;
	i = 0;
	while(i<n)
	{
		if (s[i]==(unsigned char)c)
			return (void *)(s+i);
		i++;
	}
	return NULL;
}
