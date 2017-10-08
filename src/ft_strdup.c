#include "libft.h"

char *ft_strdup(const char *s)
{
	int l;
	int i;
	char *r;









	i = 0;
	l = ft_strlen(s);
	r = (char *)malloc(sizeof(char) * l + 1);
	if (r == 0)
		return (NULL);
	while(i<l)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
