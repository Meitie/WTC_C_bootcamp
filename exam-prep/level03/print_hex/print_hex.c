/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 14:00:42 by msegal            #+#    #+#             */
/*   Updated: 2020/01/26 14:08:51 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_hex(int i)
{
	char hex[16] = "0123456789abcdef";

	if (i > 16)
		print_hex(i / 16);
	write(1, &hex[i % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		print_hex(atoi(av[1]));
	}
	write(1, "\n", 1);
	return (0);
}
