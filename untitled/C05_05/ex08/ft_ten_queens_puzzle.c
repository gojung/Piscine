/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 19:58:04 by gojung            #+#    #+#             */
/*   Updated: 2021/03/15 16:06:55 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_possible_place(int board[10], int row, int col)
{
	int i;

	i = -1;
	while (++i < row)
		if (col == board[i] || i + board[i] == row + col
				|| i - board[i] == row - col)
			return (0);
	return (1);
}

int		ft_ten_queens_puzzle_recur(int board[10], int row)
{
	int i;
	int ctr;

	ctr = 0;
	if (row == 10)
	{
		i = -1;
		while (++i < 10)
			ft_putchar(board[i] + '0');
		ft_putchar('\n');
		return (1);
	}
	else
	{
		i = -1;
		while (++i < 10)
			if (is_possible_place(board, row, i))
			{
				board[row] = i;
				ctr += ft_ten_queens_puzzle_recur(board, row + 1);
			}
	}
	return (ctr);
}

int		ft_ten_queens_puzzle(void)
{
	int board[10];
	int i;

	i = -1;
	while (++i < 10)
		board[i] = -1;
	return (ft_ten_queens_puzzle_recur(board, 0));
}
