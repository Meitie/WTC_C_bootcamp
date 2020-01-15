/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:13:27 by msegal            #+#    #+#             */
/*   Updated: 2020/01/15 18:02:22 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *deref_r;
	int i;

	deref_r = *range;
	i = 0;
	if (min >= max)
		return (NULL);
	if (!(deref_r = (int *)malloc((max - min) * sizeof(int))))
		return (NULL);
	while (min < max)
	{
		deref_r[i] = min;
		min++;
		i++;
	}
}

int		main(void)
{
	int *range = {6,7,8,9,10};
	int min = 5;
	int max = 10;
	
	ft_ultimate_range(&range, min, max);
}
