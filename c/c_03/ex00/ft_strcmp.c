#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{	
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char s1[] = "erro";
	char s2[] = "erro";
	int resultado;
	int resultado_o;
	resultado_o = strcmp(s1, s2);
	resultado = ft_strcmp(s1, s2);		
	printf("%i\n", resultado);
	printf("%i", resultado_o);
}
