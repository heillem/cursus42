#include <stdio.h>

char	ft_strchr(const char *s, char x)
{
	while (*s)
	{
		if (*s == x)
			return (*s);
		*s++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc <= 1 || argc > 3)
		return (1);
	if (argc > 1)
		printf("%c", ft_strchr(argv[1], 'o'));
	return (0);
}