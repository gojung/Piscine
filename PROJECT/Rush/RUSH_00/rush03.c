/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:54:04 by youngkim          #+#    #+#             */
/*   Updated: 2021/02/20 14:55:12 by youngkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top_bottom(int sx, int x, int sy, int y)
{
	while (sx <= x)
	{
		if (sy == 1 && sx == 1)
		{
			ft_putchar('A');
		}
		else if (sy == 1 && sx == x)
		{
			ft_putchar('C');
		}
		else if (sy == y && sx == 1)
		{
			ft_putchar('A');
		}
		else if (sy == y && sx == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		sx += 1;
	}
}

void	print_middle(int sx, int x)
{
	while (sx <= x)
	{
		if (sx == 1 || sx == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		sx += 1;
	}
}

void	rush(int x, int y)
{
	int sx;
	int sy;

	sy = 1;
	while (sy <= y)
	{
		sx = 1;
		if (sy == 1 || sy == y)
		{
			print_top_bottom(sx, x, sy, y);
		}
		else
		{
			print_middle(sx, x);
		}
		sy += 1;
		ft_putchar('\n');
	}
}
