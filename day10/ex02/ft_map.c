/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 09:50:15 by msegal            #+#    #+#             */
/*   Updated: 2020/01/21 10:02:08 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_times(int nb)
{
	return (nb *= 2);
}

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *new;

	i = 0;
	new = (int*)malloc(sizeof(int)*length);
	while (i < length)
	{
		new[i] = (*f)(tab[i]);
		printf("%d", new[i]);
		i++;
	}
	return (new);
}

int		main(void)
{
	int hi[3] = {1,2,3};
	ft_map(hi, 3, ft_times);
	return (0);
}

