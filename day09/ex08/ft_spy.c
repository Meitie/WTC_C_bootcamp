/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 20:23:18 by msegal            #+#    #+#             */
/*   Updated: 2020/01/17 05:42:02 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	*lower_case;

	i = 0;
	lower_case = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			lower_case[i] = str[i] + 32;
		i++;
	}
	return (lower_case);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			if (s2[i] == '\0' && s1[i] == '\0')
				return (0);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	powers[7];
	char	attack[7];
	char	president[10];

	i = 0;
	j = 0;
	powers = "powers";
	attack = "attack";
	president = "president";
	while (j != argc)
	{
		if (ft_strcmp(ft_strlowcase(argv[j]), powers) == 0)
			i++;
		if (ft_strcmp(ft_strlowcase(argv[j]), attack) == 0)
			i++;
		if (ft_strcmp(ft_strlowcase(argv[j]), president) == 0)
			i++;
		j++;
	}
	if (i > 0)
		write(1, "Alert!!!\n", 10);
}
