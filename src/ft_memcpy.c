 #include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
 {
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = dest;
	i = 0;
	while (i<n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
 }
