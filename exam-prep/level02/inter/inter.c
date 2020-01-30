#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int i = 0;
	char found[128] = {0};
	
	while (s1[i] != '\0')
	{
		if (found[(int)s1[i]] == 0)
			found[(int)s1[i]] = 1;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (found[(int)s2[i]] == 1)
			found[(int)s2[i]] = 2;
		i++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		if (found[(int)s1[i]] == 2)
		{
			found[(int)s1[i]] = 3;
			write(1, &s1[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	char *first = av[1];
	char *second = av[2];

	inter(first, second);
}
