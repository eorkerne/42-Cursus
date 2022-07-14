/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:04:28 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/12 13:09:11 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dgt(int a, int b)
{
	if (a == 98 && b == 99)
	{
		ft_putchar(48 + a / 10);
		ft_putchar(48 + a % 10);
		ft_putchar(' ');
		ft_putchar(48 + b / 10);
		ft_putchar(48 + b % 10);
	}
	else
	{
		ft_putchar(48 + a / 10);
		ft_putchar(48 + a % 10);
		ft_putchar(' ');
		ft_putchar(48 + b / 10);
		ft_putchar(48 + b % 10);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_dgt(a, b);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
