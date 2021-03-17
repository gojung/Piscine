/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:58:33 by gojung            #+#    #+#             */
/*   Updated: 2021/02/21 17:30:20 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush_head(int mc, int mr, int c, int r)
{
	while (c < mc)
	{
		if (r == 0 && c == 0)
		{
			ft_putchar('/');
		}
		else if (r == 0 && c == mc - 1)
		{
			ft_putchar('\\');
		}
		else if (r == mr - 1 && c == 0)
		{
			ft_putchar('\\');
		}
		else if (r == mr - 1 && c == mc - 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		c++;
	}
}

void	rush_body(int mc, int c)
{
	while (c < mc)
	{
		if (c == 0 || c == mc - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		c++;
	}
}

void	rush(int mc, int mr)
{
	int r;

	r = 0;
	while (r < mr)
	{
		if (r == 0 || r == mr - 1)
		{
			rush_head(mc, mr, 0, r);
		}
		else
		{
			rush_body(mc, mr, 0);
		}
		ft_putchar('\n');
		r++;
	}
}

int		main(void)
{
	rush(5, 5);
	rush(1, 5);
	rush(5, 1);
	rush(1, 1);
	return (0);
}
