/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:52:53 by maarroud          #+#    #+#             */
/*   Updated: 2023/02/27 14:54:12 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(unsigned int n)
{
	if (n < 10)
		ft_putchar(48 + n);
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(48 + n % 10);
	}
}

static int	ft_count(unsigned int nb)
{
	int	i;

	if (nb == 0 || !nb)
		return (1);
	i = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_args_is_unsigned(va_list args)
{
	int				ret;
	unsigned int	p;

	ret = 0;
	p = va_arg(args, unsigned int);
	ret += ft_count(p);
	ft_putnbr(p);
	return (ret);
}
