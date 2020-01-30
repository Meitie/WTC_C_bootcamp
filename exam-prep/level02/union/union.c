/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 23:09:39 by msegal            #+#    #+#             */
/*   Updated: 2020/01/27 23:24:15 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac != 3)
		return (write(1, "\n", 1));
	else
	{
		int str_union[128];
		int i = 0;

		while (i < 128)
		{
			str_union[i] = 0;
			i++;
		}
		i = 0;
		while (av[1][i] != 0)
		{
			if (str_union[av[1][i]] == 0)
			{
				str_union[av[1][i]] = 1;
				write(1, &av[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (av[2][i] != 0)
		{
			if (str_union[av[2][i]] == 0)
			{
				str_union[av[2][i]] = 1;
				write(1, &av[2][i], 1);
			}
			i++;
		}
	}
}
