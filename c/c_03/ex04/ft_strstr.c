#include <stdio.h>

int	ft_strlen(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	to_findlen;

	to_findlen = ft_strlen(to_find);
	i = 0;
	j = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (str[i] == '\0' && j != to_findlen)
		return ((void *)0);
	return (&str[i - j]);
}

int	main(void)
{
	char	*result;
	char	str[] = "cachorro come muito coms";
	char	to_find[] = "come";
	ft_strlen(to_find);
	result = ft_strstr(str, to_find);
	printf("%s", result);
}
