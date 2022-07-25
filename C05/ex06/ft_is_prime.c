/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:43:59 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/20 20:30:41 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	nb_us;

	nb_us = nb;
	i = 5;
	if (nb < 2)
		return (0);
	if ((nb == 2) || (nb == 3))
		return (1);
	else if (((nb % 2) == 0) || ((nb % 3) == 0))
		return (0);
	else
	{
		while (i * i <= nb_us)
		{
			if ((nb_us % i) == 0)
				return (0);
			i = i + 2;
		}
	}
	return (1);
}

/*
int	main(void)
{	
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}
*/