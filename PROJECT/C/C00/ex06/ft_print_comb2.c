/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 19:43:58 by gojung            #+#    #+#             */
/*   Updated: 2021/02/24 16:54:03 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_2digit(int i)
{
	char	c;

	c = i / 10 + '0';
	write(1, &c, 1);
	c = i % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		first_num;
	int		second_num;

	first_num = 0;
	while (first_num < 99)
	{
		second_num = first_num + 1;
		while (second_num <= 99)
		{
			ft_print_2digit(first_num);
			write(1, " ", 1);
			ft_print_2digit(second_num);
			if (first_num != 98 || second_num != 99)
			{
				write(1, ", ", 2);
			}
			second_num++;
		}
		first_num++;
	}
}
