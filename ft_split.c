/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:12:59 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/24 18:25:47 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_split_keys(char *dict, int i, int j)
{
	int		sep;
	char	**keys;

	sep = 0;
	keys = malloc(41);
	*keys = malloc(50000);
	if (!keys)
		return (NULL);
	while (dict[i])
	{
		while (dict[i] >= '0' && dict[i] <= '9')
		{
			keys[sep][j] = dict[i];
			j++;
			i++;
			if (dict[i] < '0' && dict[i] > '9')
				sep++;
		}
		i++;
	}
	return (keys);
}

char	*ft_split_value(char *dict, int i, int j)
{
	int		sep;
	char	**value;

	sep = 0;
	value = malloc(41);
	*value = malloc(50000);
	if (!value)
		return (NULL);
	while (dict[i])
	{
		while (dict[i] >= 'a' && dict[i] <= 'z' 
			|| dict[i] >= 'A' && dict[i] <= 'Z')
		{
			value[sep][j] = dict[i];
			j++;
			i++;
			if (dict[i] < 'a' && dict[i] > 'z'
				|| dict[i] < 'A' && dict[i] > 'Z')
				sep++;
		}
		i++;
	}
	return (value);
}

int check_numbers(char *nb)
{
	int i;

	i = 0;
	len_nb = ft_strlen(nb);
	while (nb[i])
	{
		
	}
	
}