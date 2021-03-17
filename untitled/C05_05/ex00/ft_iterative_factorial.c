/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:05:38 by gojung            #+#    #+#             */
/*   Updated: 2021/03/15 16:08:20 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	index;

	if (nb < 0)
		return (0);
	index = 1;
	result = 1;
	while (index < nb + 1)
		result *= index++;
	return (result);
}
