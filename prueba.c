#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%d", ft_strncmp(argv[1], argv[2], 5));
}