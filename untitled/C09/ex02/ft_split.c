/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 04:27:04 by gojung            #+#    #+#             */
/*   Updated: 2021/03/18 05:54:18 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_char_in_charset(char c, char *charset)
{
	int i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int		numberoftoken(char *s1, char *c)
{
	int	ctr;

	ctr = 0;
	if (!(*s1))
		return (0);
	while (*s1)
	{
		if (is_char_in_charset(*s1, c))
			ctr++;
		s1++;
	}
	return (ctr + 1);
}

int		sizeoftoken(char *s2, char *charset, int i)
{
	int	length;

	length = 0;
	while (!is_char_in_charset(s2[i], charset) && s2[i++])
		length++;
	return (length);
}

char	**fill_result(char *str, char **result, char *charset, int token_num)
{
	int	i;
	int row;
	int	col;

	i = 0;
	row = 0;
	while (str[i] && row < token_num)
	{
		col = 0;
		while (is_char_in_charset(str[i], charset))
			i++;
		result[row] = (char *)malloc(sizeof(char) *
				sizeoftoken(str, charset, i) + 1);
		while (str[i] && !is_char_in_charset(str[i], charset))
			result[row][col++] = str[i++];
		result[row][col] = '\0';
		row++;
	}
	result[row] = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		token_num;

	if (!str)
		return (NULL);
	token_num = numberoftoken(str, charset);
	result = (char **)malloc(sizeof(char *) * (token_num + 1));
	if (!result)
		return (NULL);
	return (fill_result(str, result, charset, token_num));
}
