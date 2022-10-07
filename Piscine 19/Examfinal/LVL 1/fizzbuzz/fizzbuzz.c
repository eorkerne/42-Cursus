/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:50:23 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/28 15:03:04 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 10)
		ft_putchar(48 + nb);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(48 + (nb % 10));
	}
}

int main(void)
{
	int nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (nb % 3 == 0)
			write(1, "fizz\n", 5);
		else if (nb % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(nb);
			write(1, "\n", 1);
		}
		nb++;
	}
	return(0);
}