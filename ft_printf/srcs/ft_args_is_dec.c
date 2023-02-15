/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:51:32 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/07 16:11:31 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n < 10)
			ft_putchar(48 + n);
		else
		{
			ft_putnbr(n / 10);
			ft_putchar(48 + n % 10);
		}
	}
}

static int	ft_count(int nb)
{
	int	i;

	if (nb == 0 || !nb)
		return (1);
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i += 1;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_args_is_dec(va_list args)
{
	int	ret;
	int	p;

	ret = 0;
	p = va_arg(args, int);
	ret += ft_count(p);
	ft_putnbr(p);
	return (ret);
}
