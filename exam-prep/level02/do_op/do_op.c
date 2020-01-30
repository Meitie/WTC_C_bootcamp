/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 14:46:36 by msegal            #+#    #+#             */
/*   Updated: 2020/01/27 09:58:35 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac != 4)
		printf("\n");
	else
	{
		int     first = atoi(av[1]);
		char	op = av[2][0];
		int     second = atoi(av[3]);
		int		sum = 0;
		
		if (op == '+')
			sum = first + second;
		if (op == '-')
			sum = first - second;
		if (op == '/')
			sum = first / second;
		if (op == '*')
			sum = first * second;
		if (op == '%')
			sum = first % second;
		printf("%d\n", sum);
	}
	return (0);
}
