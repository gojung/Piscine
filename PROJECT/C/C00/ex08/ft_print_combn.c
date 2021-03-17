/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 19:49:15 by gojung            #+#    #+#             */
/*   Updated: 2021/02/25 14:00:01 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(int n, int ctr, char start, char number[])
{
	int i;

	if (n < ctr)
		return ;
	if (n == ctr)
	{
		i = 0;
		while (i < n)
		{
			write(1, &number[i], 1);
			i++;
		}
		if (!(number[0] == (9 - n + 1) + '0' && number[n - 1] == '9'))
			write(1, ", ", 2);
	}
	while (start <= '9')
	{
		number[ctr] = start;
		ft_recursive(n, ctr + 1, start + 1, number);
		start++;
	}
}

void	ft_print_combn(int n)
{
	char number[10];
	char start;

	start = '0';
	ft_recursive(n, 0, start, number);
}

int		main(void)
{
	ft_print_combn(5);
}
