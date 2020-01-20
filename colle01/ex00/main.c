/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:48:12 by msegal            #+#    #+#             */
/*   Updated: 2020/01/19 17:36:52 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		is_empty_cell(char grid[][9], int row, int col, int num);
int		same_box(char grid[][9], int row_start, int col_start, int num);
int		same_col(char grid[][9], int row, int num);
int		same_row(char grid[][9], int col, int num);
int		ft_error(void);

int		solve_sudoku(char puzzle[][9], int row, int col)
{
	int i;

	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (solve_sudoku(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (solve_sudoku(puzzle, row + 1, 0));
			else
				return (1);
		}
		else
		{
			i = -1;
			while (++i < 9)
			{
				if (is_empty_cell(puzzle, row, col, i + 1))
				{
					puzzle[row][col] = i + 1;
					if ((col + 1) < 9)
					{
						if (solve_sudoku(puzzle, row, col + 1))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
						if (solve_sudoku(puzzle, row + 1, 0))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else
						return (1);
				}
			}
		}
		return (0);
	}
	else
		return (1);
}

void	print_sudoku(char puzzle[][9], int i, int j)
{
	char	print_sod;

	if (solve_sudoku(puzzle, 0, 0))
	{
		i = 1;
		while (i < 10)
		{
			j = 1;
			while (j < 10)
			{
				print_sod = puzzle[i - 1][j - 1] + 48;
				write(1, &print_sod, 1);
				write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "Error\n", 6);
}

int		ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		main(int argc, char **argv)
{
	char	puzzle[9][9];
	int		i;
	int		j;

	if (argc != 10)
		return (ft_error());
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			if (argv[i + 1][j] == '.')
				puzzle[i][j] = 0;
			else if (argv[i + 1][j] >= '1' && argv[i + 1][j] <= '9')
				puzzle[i][j] = argv[i + 1][j] - 48;
			else
				return (ft_error());
		}
	}
	print_sudoku(puzzle, 0, 0);
	return (0);
}
