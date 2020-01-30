#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr (int num)
{
	char number;
	
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num < 10)
	{
		number = num + '0';
		write(1, &number, 1);	
	}
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr(atoi(av[1]));
	return (0);
}
