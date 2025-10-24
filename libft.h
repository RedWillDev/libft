#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(int c);
int	ft_atoi(const char *theString);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	*ft_memmove(void *destination, const void *source, size_t size);
void	ft_memset(void *ptr, int vlu, size_t cnt);
char	*ft_strchr(const char *string, int searchedChar);
char	*strrchr(const char *string, int searchedChar);
char	*ft_strdup(const char *source);
unsigned int	ft_strlcat(char *dst, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *c);
int	ft_strncmp(const char *first, const char *second, size_t length);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int character);
int	ft_toupper(int character);
char *ft_strtrim(char const *s1, char const *set);
#endif