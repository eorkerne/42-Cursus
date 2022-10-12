/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:45:16 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/12 15:08:47 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wordlen(const char *s, char c, int i)
{
	int	k;

	k = 0;
	while (s[i] && s[i++] != c)
		k++;
	return (k);
}

static int	word_count(char const *s, char c)
{
	int	i;
	int	wordc;

	i = 0;
	wordc = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
		}
		if (s[i] && s[i] != c)
		{
			wordc++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wordc);
}

static char	**ft_split2(char const *s, char c)
{	
	char	**strs;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	strs = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!strs)
		return (0);
	while (s[i] && j < word_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		strs[j] = malloc(sizeof(char) * (ft_wordlen(s, c, i) + 1));
		if (!strs[j])
			return (0);
		while (s[i] && s[i] != c)
			strs[j][k++] = s[i++];
		strs[j++][k] = '\0';
		k = 0;
	}
	strs[j] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = ft_split2(s, c);
	return (strs);
}
