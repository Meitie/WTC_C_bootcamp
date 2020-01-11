/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:09:52 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 09:52:42 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_arr(int *arr)
{
	write(1, &arr[0], 1);
	write(1, &arr[1], 1);
	write(1, &arr[2], 1);
}

void	ft_print_comb(void)
{
	int arr[3];

	arr[0] = 48;
	while (arr[0] <= 55)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= 56)
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= 57)
			{
				write_arr(arr);
				if (arr[0] == 55 && arr[1] == 56 && arr[2] == 57)
					write(1, "\0", 1);
				else
					write(1, ", ", 2);
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
