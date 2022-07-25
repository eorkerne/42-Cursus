/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:06:14 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/20 20:39:17 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	i = nb;
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 10));
}
*/