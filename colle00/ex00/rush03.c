/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:27:48 by msegal            #+#    #+#             */
/*   Updated: 2020/01/12 16:37:21 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c);

int		horizontal_line(int x)
{
	int hori_lines;
	int i;
	int finished_line;

	if (x <= 0)
		return (0);
	else if (x == 1)
		return (write(1, "A\n", 2));
	else if (x == 2)
		return (write(1, "AA\n", 3));
	else
	{
		i = 0;
		hori_lines = x - 2;
		finished_line = write(1, "A", 1);
		while (i < hori_lines)
		{
			finished_line += write(1, "B", 1);
			i++;
		}
		finished_line += write(1, "C\n", 2);
		return (finished_line);
	}
}

int		vertical_line(int x)
{
	int hor_lines;
	int line;
	int i;

	i = 0;
	hor_lines = x - 2;
	if (x <= 0)
		return (0);
	if (x == 1)
	{
		line = ft_putchar('B');
		return (line);
	}
	else
	{
		line = ft_putchar('B');
		while (i < hor_lines)
		{
			line += write(1, " ", 1);
			i++;
		}
		line += ft_putchar('B');
		return (line);
	}
}

int		rush(int x, int y)
{
	int box;
	int i;

	i = 2;
	if (x == 1 && y == 1)
		return (write(1, "A\n", 2));
	else if (y == 1)
		return (horizontal_line(x));
	else if (x <= 0 || y <= 0)
		return (write(1, "Please input a number greater or equal to 1\n", 44));
	else
	{
		box = horizontal_line(x);
		while (i < y)
		{
			box += vertical_line(x);
			box += write(1, "\n", 1);
			i++;
		}
		box += horizontal_line(x);
		return (0);
	}
}
