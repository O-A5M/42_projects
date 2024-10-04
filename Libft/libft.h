#include <stddef.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
char	*ft_strcpy(char *restrict dst, const char *restrict src);
char	*ft_strcat(char *restrict dst, const char *restrict src);
int	ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
int	ft_atoi(const char *nptr);
char	*ft_strdub(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_islower(int c);
int	ft_isupper(int c);
void	ft_strclr(char *s);
int	ft_strequ(char const *s1, char const *s2);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
