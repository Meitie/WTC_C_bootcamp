/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:12:28 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 11:59:48 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int total;

	total = 1;
	if (nb > 0)
	{
		while (nb >= 1)
		{
			total *= nb;
			nb--;
		}
		return (total);
	}
	else
		return (0);
}

int		main(void)
{
	printf("Factorial: %d", ft_iterative_factorial(5));
	return (0);
}
