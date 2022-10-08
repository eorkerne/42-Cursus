/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:42:57 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/08 15:56:05 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	newlen;
	size_t	countset;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	countset = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] != set[j])
			countset++;
		i++;
		j++;
	}
	newlen = ft_strlen(s1) - countset;
	newstr = malloc(sizeof(char) * newlen);
	if (!newstr)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j])
		{
			while (s1[i] == set[j])
			{
				i++;
			}
			j++;
		}
		newstr[k++] = s1[i++];
	}
	newstr[k] = '\0';
	return (newstr);
}
