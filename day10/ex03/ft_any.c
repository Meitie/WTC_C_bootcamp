/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:11:34 by msegal            #+#    #+#             */
/*   Updated: 2020/01/21 13:27:42 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if  (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

int		ft_any(char **tab, int (*f)(char *))
{
	int i;
	int j;
	char *new;

	new = *tab;
	i = 0;
	printf("%d", (*f)(new));
	while (tab[i] != '\0')
	{
		j = 0;
		if ((*f)(new) == 1)
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 0)
	{
		av++;
		printf("%d", ft_any(av, ft_str_is_lowercase));
		return (0);
	}
}
