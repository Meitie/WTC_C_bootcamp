/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:08:26 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 14:49:01 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int		main(void)
{
	printf("Recursive power: %d", ft_recursive_power(4,10));
	return (0);
}
