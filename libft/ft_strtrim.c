/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:42:57 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/11 13:41:06 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countset(char const *s1, char const *set)
{
	size_t	countset;
	size_t	i;
	size_t	j;

	i = 0;
	countset = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				countset++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (countset);
}

char	*ft_replace(char const *s1, char const *set)
{
	char	*str2;
	size_t	i;
	size_t	j;

	str2 = ft_strdup(s1);
	i = 0;
	while (str2[i])
	{
		j = 0;
		while (set[j])
		{
			if (str2[i] == set[j])
			{
				str2[i] = '\0';
				break ;
			}
			j++;
		}
		i++;
	}
	return (str2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	char	*str2;
	size_t	countset;
	size_t	i;
	size_t	j;

	countset = ft_countset(s1, set);
	str2 = ft_replace(s1, set);
	newstr = malloc(sizeof(char) * (ft_strlen(s1) - countset) + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (j < (ft_strlen(s1) - countset))
	{
		if (str2[i] == '\0')
			i++;
		else
			newstr[j++] = str2[i++];
	}
	free(str2);
	newstr[j] = '\0';
	return (newstr);
}
