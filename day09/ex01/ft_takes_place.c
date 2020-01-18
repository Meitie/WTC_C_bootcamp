/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 10:02:52 by msegal            #+#    #+#             */
/*   Updated: 2020/01/16 11:12:59 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		next_hour;
	char	time_of_day[5];
	char	time_of_day_2[5];

	time_of_day = "A.M.";
	time_of_day_2 = "A.M.";
	if (hour != 23)
		next_hour = hour + 1;
	else
		next_hour = 12;
	if (hour >= 12 && hour <= 23)
		time_of_day[0] = 'P';
	if (hour != 23 && next_hour >= 12)
		time_of_day_2[0] = 'P';
	if (hour == 0)
		hour = 12;
	if (hour >= 13 && hour <= 23)
		hour -= 12;
	if (next_hour >= 13 && next_hour <= 23)
		next_hour -= 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n" \
			, hour, time_of_day, next_hour, time_of_day_2);
}
