#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	int i;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	i = '0' + (nb % 10);
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &i, 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr((atoi(av[1]))); 
	}
}
