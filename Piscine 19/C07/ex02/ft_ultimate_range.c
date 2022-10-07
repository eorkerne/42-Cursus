/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:51:13 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/25 19:43:06 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	tab_size;
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab_size = max - min;
	tab = malloc(sizeof(*tab) * tab_size);
	if (!tab)
		return (-1);
	while (min != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (tab_size);
}
