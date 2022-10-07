/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:05:00 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/25 19:43:04 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	int i = 0;
	int *tab = ft_range(-5, 50);
	while (i < 55)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
*/