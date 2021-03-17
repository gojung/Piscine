/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngkim <youngkim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 21:52:25 by youngkim          #+#    #+#             */
/*   Updated: 2021/02/20 14:49:38 by youngkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top_botton(int sx, int x)
{
	while (sx <= x)
	{
		if (sx == 1 || sx == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
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
			ft_putchar('|');
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
			print_top_botton(sx, x);
		}
		else
		{
			print_middle(sx, x);
		}
		sy += 1;
		ft_putchar('\n');
	}
}
