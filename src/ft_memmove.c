#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
 {
	char *s;
	char *d;
	size_t i;
	char tmp[n];

	s = (char *)src;
	d = (char *)dest;
	i = 0;

	while(i<n)
	{
		tmp[i]=s[i];
		i++;
	}
	i = 0;
	while(i<n)
	{
		d[i] = tmp[i];
		i++;
	}
	return dest;
 }
