#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	str_allc(const char *s, char c, char **ret)
{
	int	i;
	int	a;
	int	allc;

	i = 0;
	a = 0;
	while (s[i])
	{
		allc = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			allc++;
			i++;
		}
		ret[a] = (char *) malloc(sizeof(char) * (allc + 1));
		i++;
		a++;
	}
}

void	fill_it(const char *s, char c, char **ret)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	b = 0;
	while (s[i])
	{
		b = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			ret[a][b] = s[i];
			i++;
			b++;
		}
		ret[a][b] = '\0';
		a++;
	}
}

char	**ft_strsplit(char const *s, char c)
{
	int	mem;
	char	**ret;

	mem = ft_cntwrd(s, c);
	ret = (char **) malloc(sizeof(char *) * mem);
	if (ret == NULL)
		return (NULL);
	str_allc(s, c, ret);
	fill_it(s, c, ret);
	return (ret);
}
/*
#include <stdio.h>

int main()
{
    char str[] = "Hello, this is a test string. yes it h";
    char delimiter = ' ';
    char **result;
    int i;

    // Split the string
    result = ft_strsplit(str, delimiter);
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the results
    for (i = 0; result[i] != NULL; i++) {
        printf("Word %d: %s\n", i + 1, result[i]);
        free(result[i]); // Free each individual string
    }
    free(result); // Free the array of strings

    return 0;
}*/
