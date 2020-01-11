/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 20:52:02 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 10:52:41 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a1;
	int b1;
	int y;
	int z;

	a1 = *a;
	b1 = *b;
	y = a1 / b1;
	printf("Divide: %d\n", y);
	z = a1 % b1;
	printf("Mod: %d\n", z);
	a = &y;
	b = &z;
}

int		main(void)
{
	int *a;
	int *b;
	int a1;
	int b1;

	a1 = 10;
	b1 = 6;
	a = &a1;
	b = &b1;
	ft_ultimate_div_mod(a,b);
	return (0);
}
