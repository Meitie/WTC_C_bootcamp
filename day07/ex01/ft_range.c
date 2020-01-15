/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:31:29 by msegal            #+#    #+#             */
/*   Updated: 2020/01/15 17:09:19 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tmp;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(tmp = (int *)malloc((max - min) * sizeof(int))))
		return (NULL);
	while (min < max)
	{
		tmp[i] = min;
		printf("tmp = %d | min = %d \n", tmp[i], min);
		min++;
		i++;
	}
	return (tmp);
}

int		main(void)
{
	ft_range(3, 10);
}
