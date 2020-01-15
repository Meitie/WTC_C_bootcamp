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

	i = 0;
	deref_r = *range;
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
	return (deref_r);
}

int		main(void)
{
    int **range;
    int *range1;
    int range2;
	int min = 5;
	int max = 10;

	range2 = 5;
	range2 = *range1;
	**range = *range1;
	printf("%d", ft_ultimate_range(**range, min, max));

}
