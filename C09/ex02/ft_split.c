/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:42:38 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/26 19:25:32 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_str_charset(char c, char *charset);

int	ft_lenstr(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && check_str_charset(str[i], charset) != 1)
		i++;
	return (i);
}

int	check_str_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] && (c != charset[i]))
		j++;
	if (c == charset[i])
		return (1);
	else
		return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	wordc;

	i = 0;
	wordc = 0;
	while (str[i])
	{
		while (str[i] && check_str_charset(str[i], charset) == 1)
			i++;
		if (check_str_charset(str[i], charset) == 0)
		{
			wordc++;
			while (str[i] && check_str_charset(str[i], charset) == 0)
				i++;
		}
	}
	return (wordc);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	strs = malloc(sizeof(*strs) * (word_count(str, charset) + 1));
	if (!strs)
		return (0);
	while (str[i] && j < word_count(str, charset))
	{
		while (str[i] && check_str_charset(str[i], charset) == 1)
			i++;
		strs[j] = malloc(sizeof(*str) * (ft_lenstr(&str[i], charset) + 1));
		if (!strs[j])
			return (0);
		while (str[i] && check_str_charset(str[i], charset) == 0)
			strs[j][k++] = str[i++];
		strs[j++][k] = '\0';
		k = 0;
	}
	strs[j] = 0;
	return (strs);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "?abc!def?ghi?";
	char	charset[] = "!?";
	int		i;
	char	**strs;
	i = 0;
	printf("%d\n", word_count(str, charset));
	strs = ft_split(str, charset);
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	free(strs);
}
*/