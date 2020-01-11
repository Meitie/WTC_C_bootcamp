/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:57:03 by msegal            #+#    #+#             */
/*   Updated: 2020/01/11 09:44:23 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 122;
	while (i <= 122 && i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
