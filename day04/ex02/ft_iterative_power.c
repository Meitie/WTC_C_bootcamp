/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 13:27:17 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 14:29:13 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int total;

	if (power < 0)
		return (0);
	else
	{
		total = 1;
		while (power >= 1)
		{
			total *= nb;
			power--;
		}
		printf("power %d \t nb %d\n", power, nb);
		return (total);
	}
}

int		main(void)
{
	printf("powerof :%d", ft_iterative_power(2, -4));
	return (0);
}
