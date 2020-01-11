/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 11:10:30 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 10:16:32 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
	printf("This is inside the function :%d\n", *nbr);
}

int		main(void)
{
	int nr;

	nr = 7;
	printf("This is inital number declared: %d\n", nr);
	ft_ft(&nr);
	printf("This is the number after passing through the function: %d\n", nr);
	return (0);
}
