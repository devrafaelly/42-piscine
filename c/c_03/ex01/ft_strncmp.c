#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (*s1 || *s2))
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	result;
	char 	s1[] = "ab";
	char 	s2[] = "abc";
	result = ft_strncmp(s1, s2, 3);
	printf("%i\n", result);
	printf("%i", strncmp(s1, s2, 3));
}