/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngkim <youngkim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 22:17:27 by youngkim          #+#    #+#             */
/*   Updated: 2021/02/20 14:32:44 by youngkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top_bottom(int sx, int x, int sy, int y)
{
	while (sx <= x)
	{
		if (sy == 1 && sx == 1)
		{
			ft_putchar('/');
		}
		else if (sy == 1 && sx == x)
		{
			ft_putchar('\\');
		}
		else if (sy == y && sx == 1)
		{
			ft_putchar('\\');
		}
		else if (sy == y && sx == x)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
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
			ft_putchar('*');
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
