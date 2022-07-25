/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:42:27 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/20 20:34:42 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	unsigned int	nb_us;

	nb_us = nb;
	i = 2;
	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	while ((i * i) <= nb_us)
	{
		if ((nb_us % i) == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}	
	return (nb);
}
/*
int main(void)
{
	printf("%d\n", ft_find_next_prime(189762924));
}
*/