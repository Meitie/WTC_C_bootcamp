/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:58:58 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 17:27:29 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else
	{
		if (index == 1)
			return (1);
		else
			return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
}

int		main(void)
{
	int i;
	int fib;
	int n;

	n = 5;
	i = 0;
	while (i <= n)
	{
		fib = ft_fibonacci(i);
		if (ft_fibonacci(i) == n)
			printf("%d\n", fib);
		else
			printf("%d, ", fib);
		i++;
	}
	return (0);
}
