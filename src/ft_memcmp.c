#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
	size_t i;
	char *a;
	char *b;

	a = (char *)s1;
	b = (char *)s2;
	i = 0;

	while (i<n)
	{
		int res = a[i] - b[i];
		if(res!=0)
			return res;
		i++;
	}
	return 0;
 }

