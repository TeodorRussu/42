#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	char *subsecventa;

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0] && big[i + 1] == little[1])
		{
			subsecventa = (char *)big + i;
			j = 0;
			while (little[j] == big[i + j] && i+j < len)
			{
				j++;
				if (little[j] == '\0')
					return (subsecventa);
			}
		}
		i++;
	}
	return (NULL);
}
