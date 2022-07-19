/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:43:59 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/15 13:35:27 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	c;

	i = 2;
	if (nb < i)
		return (0);
	if (nb == i)
		return (1);
	c = nb;
	while (nb % i != 0)
	{
		i++;
		c--;
	}
	if (c > 2)
		return (0);
	return (1);
}

int	main(void)
{	
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}