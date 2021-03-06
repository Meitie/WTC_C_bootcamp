/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 12:06:43 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 13:23:38 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb <= 1)
			return (1);
		else
		{
			nb *= ft_recursive_factorial(nb - 1);
			return (nb);
		}
	}
	else
		return (0);
}

int		main(void)
{
	printf("Factorial: %d\n", ft_recursive_factorial(-10));
	return (0);
}
