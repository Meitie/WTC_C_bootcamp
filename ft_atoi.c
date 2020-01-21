#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int nb;
    int neg;

    i = 0;
    nb = 0;
    neg = 1;
    while (str[i] > 8 && str[i] < 17)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }
    return (nb * neg);
}

int main(void)
{
    char str[] = "51231";
    printf("%d", ft_atoi(str));
    return (0);
}
