#include <stdlib.h>
#include <stdio.h>

void	print_board(int **board, int n)
{
	int	i;
	int j;

	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int		**init_board(int size)
{
	int i;
	int j;
	int ** board;

	board = malloc(sizeof(int*) * size);
	i = -1;
	while (++i < size)
	{
		board[i] = malloc(sizeof(int) * size);
		j = -1;
		while (++j < size)
			board[i][j] = 0;
	}
	return (board);
}

int		**board_dup(int **board)
{
	int **copy;
	int	i;
	int	j;

	copy = init_board(9);
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			copy[i][j] = board[i][j];
		}
	}
	return (copy);
}

void	free_board(int **board)
{
	int i;

	i = -1;
	while (++i < 9)
		free(board[i]);
	free(board);
}


int	not_assigned(int **board, int *row, int *col)
{
	*row = 0;
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (board[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int	is_possible(int **board, int row, int col, int nbr)
{
	int i;

	i = -1;
	while (++i < 9)
	{
		if (board[row][i] == nbr)
			return (0);
		if(board[i][col] == nbr)
			return (0);
	}
	return (1);
}

int	solution(int **board,  int *res)
{
	int	row;
	int	col;
	int	nbr;
	int temp;
	int ctr;
	int	**board_copy;	
	
	ctr = 0;

	if (!not_assigned(board, &row, &col))
	{	
		print_board(board, 9);
		return (1);
	}
	
	nbr = 0;
	while (++nbr <= 9)
	{
		if (is_possible(board, row, col, nbr))
		{
			//printf("\n\npossible(%d, %d)\n", row, col);
		
			//printf("\n %x \n", board_copy[0][0]);	//addr
			board_copy = board_dup(board);			//malloc
			
			board_copy[row][col] = nbr;				
			//print_board(board_copy, 4);
			temp = solution(board_copy, res);
			ctr += temp;
			/*
			if (temp){
				//print_board(board_copy, 4);
				free_board(board_copy);
				res = 1;
				//return (1);
			}
			*/
			free_board(board_copy);
		}
		
	}
	
	return (ctr);
}

int	main(void)
{
	int **board;
	int  *res;
	int i;

	board = init_board(9);
/*
	i = -1;
	while (++i < 4)
	{
		board[i][0] = i + 1;
	}
	print_board(board, 4);
*/	
	
	res = 0;
	//solution(board, res);
	printf("\nsolution: %d", solution(board, res));
	/*
	if(!res)
		printf("Error\n");
	*/
	return 0;
}
