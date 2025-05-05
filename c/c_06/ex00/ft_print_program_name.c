#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char *file_name;
	
	(void)argc;
	file_name = argv[0];
	i = 0;
	while(file_name[i])
	{
		write(1, &file_name[i], 1);
		i++;
	}
	return (0);
}