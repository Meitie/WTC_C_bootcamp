/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safty_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 17:05:22 by msegal            #+#    #+#             */
/*   Updated: 2020/01/19 17:05:40 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		same_row(char grid[][9], int col, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[col][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int		same_col(char grid[][9], int row, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][row] == num)
			return (1);
		i++;
	}
	return (0);
}

int		same_box(char grid[][9], int row_start, int col_start, int num)
{
	int row;
	int col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (grid[row + row_start][col + col_start] == num)
				return (1);
			col++;
		}
		row++;
	}
	return (0);
}

int		is_empty_cell(char grid[][9], int row, int col, int num)
{
	return (!same_row(grid, row, num) &&\
			!same_col(grid, col, num) &&\
			!same_box(grid, row - row % 3, col - col % 3, num) &&\
			grid[row][col] == 0);
}
