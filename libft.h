#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_alnum(int c);
int ft_isprint(int c);
int ft_isascii(int c);
size_t  ft_strlen(char *c);
void  ft_memset(void *ptr, int vlu, size_t cnt);
void  *ft_memcpy( void *destination, const void *source, size_t size );
void  *ft_memmove( void *destination, const void *source, size_t size );
unsigned int  ft_strlcpy(char *dst, const char *src, size_t size);


#endif