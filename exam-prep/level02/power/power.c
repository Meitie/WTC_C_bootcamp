#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	return ((n & (-n)) == n ? 1 : 0);
}

int		main(void)
{
	printf("%d", is_power_of_2(8));
}
