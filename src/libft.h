

#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#include <stdio.h> //sterge-l
#include <strings.h> //sterge-l

void	*ft_memccpy(void	*dest, const void	*src, int c, size_t n);
void	*ft_memchr(const void	*src, int c, size_t n);
int		ft_memcmp(const void	*s1, const void	*s2, size_t n);
void	*ft_memcpy(void	*dest, const void	*src, size_t n);
void	*ft_memmove(void	*dest, const void	*src, size_t n);
void	*ft_memset(void	*p, int val, size_t ln);
void	ft_bzero(void	*s, size_t n);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char 	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
char 	*ft_strstr(char *str, char *to_find);
char 	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);



#endif
