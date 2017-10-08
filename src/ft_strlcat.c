#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t i;
	size_t j;
	size_t dlen;

	j = 0;
	i = ft_strlen(dst);
	dlen = ft_strlen(dst);
	if (dsize < ft_strlen(dst) + 1)
		return (ft_strlen(src) + dsize);
	else
	{
		while (i < dsize - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (ft_strlen(src) + dlen);
}

