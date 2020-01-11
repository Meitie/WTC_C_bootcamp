/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 18:36:43 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 10:59:14 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int c;
	int d;

	c = a / b;
	div = &c;
	printf("This is div: %d\n", *div);
	d = a % b;
	mod = &d;
	printf("this is mod: %d\n", *mod);
}

int		main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 10;
	b = 6;
	div = &a;
	mod = &b;
	ft_div_mod(a,b,div,mod);	
	return (0);
}
