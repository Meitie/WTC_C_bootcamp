/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:30:37 by msegal            #+#    #+#             */
/*   Updated: 2020/01/27 20:15:14 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int big = 0;

	if (!tab)
		return (0);
	else
	{
		while (len > 0 && tab[len])
		{
			if (big < tab[len - 1])
			{
				big = tab[len-1];
			}
			len--;
		}
	}
	return (big);
}

int		main(void)
{
	int num[5] = {1, 22, 6, 122,3};
	max(num, 99);
	printf("%d", max(num, 0));
	return (0);
}
