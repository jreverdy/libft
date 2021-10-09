
#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(const char *str);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strdup(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);

#endif //LIBFT_LIBFT_H