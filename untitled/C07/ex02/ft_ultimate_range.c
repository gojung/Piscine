/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:04:48 by gojung            #+#    #+#             */
/*   Updated: 2021/03/15 20:37:14 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	length = max - min - 1;
	if ((result = malloc(length * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = result;
	i = 0;
	while (i <= length)
	{
		result[i] = min + i;
		i++;
	}
	return (length + 1);
}
