/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 13:52:43 by msegal            #+#    #+#             */
/*   Updated: 2020/01/18 13:59:53 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
	printf("%d, %d", point->x, point->y);
}
int main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}
