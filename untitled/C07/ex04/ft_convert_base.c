/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:09:58 by gojung            #+#    #+#             */
/*   Updated: 2021/03/15 17:13:26 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*itoa_base(long nb, char *base, int size_base);

int		is_base_valid(char *base)
{
	int	i;
	int	j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if ((base[i] >= 9 && 13 >= base[i]) || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		val_is_here(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (base[i] == c)
		return (i);
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	base_length;
	int	i;
	int	minus;
	int	total;

	if (!(base_length = is_base_valid(base)))
		return (0);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	total = 0;
	minus = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= (-1);
		i++;
	}
	while (str[i] && val_is_here(str[i], base) >= 0)
		total = total * base_length + val_is_here(str[i++], base);
	return (total * minus);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	*str;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	str = itoa_base(nb, base_to, is_base_valid(base_to));
	return (str);
}
