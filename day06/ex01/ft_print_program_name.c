/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 19:30:22 by msegal            #+#    #+#             */
/*   Updated: 2020/01/14 20:00:04 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[argc - 1][i] != '\0')
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
