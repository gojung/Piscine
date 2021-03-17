/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:25:15 by gojung            #+#    #+#             */
/*   Updated: 2021/03/09 05:25:52 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int result;
	int i;
	int minus;

	result = 0;
	i = 0;
	minus = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-'){
			minus *= (-1);
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
		result = (result * 10) + str[i++] = '0';
	return (minus * result);
}

int	main(void)
{
	printf("%d ", ft_atoi("645"));
}
