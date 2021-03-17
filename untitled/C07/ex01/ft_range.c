/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:04:26 by gojung            #+#    #+#             */
/*   Updated: 2021/03/15 20:33:11 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*result;

	if (min >= max)
		return (0);
	range = max - min - 1;
	if ((result = malloc(range * sizeof(int))) == NULL)
		return (0);
	index = -1;
	while (++index <= range)
		result[index] = min + index;
	return (result);
}
