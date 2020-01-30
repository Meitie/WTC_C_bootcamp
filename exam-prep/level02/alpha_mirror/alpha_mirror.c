/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 12:16:26 by msegal            #+#    #+#             */
/*   Updated: 2020/01/26 14:23:48 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i = 0;
		char *mirror = av[1];

		while (mirror[i] != '\0')
		{
			if (mirror[i] >= 'a' && mirror[i] <= 'z')
			{	
				mirror[i] = 'z' - mirror[i] + 'a';
				write(1, &mirror[i], 1);
			}
			else if (mirror[i] >= 'A'  && mirror[i] <= 'Z')
			{
				mirror[i] = 'Z' - mirror[i] + 'A';
				write(1, &mirror[i], 1);
			}
			else
				write(1, &mirror[i], 1);
			i++;
		}
	}
		write(1, "\n", 1);
		return (0);
}
