/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 12:02:39 by msegal            #+#    #+#             */
/*   Updated: 2020/01/27 09:54:44 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		int i = 0;
		char *new = av[1];

		while (new[i] != '\0')
			i++;
		i--;
		while (i > 0 && (new[i] == ' ' || new[i] == '\t'))
			i--;
		while (i > 0 && new[i] != ' ' && new[i] != '\t')
			i--;
		i++;
		while (new[i] != '\0' && new[i] != '\t' && new[i] != ' ')
		{
			write(1, &new[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
