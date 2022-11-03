/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_base_ten.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:51:20 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/03 17:02:24 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(int nb)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789";
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(base[nb % 10]);
		i++;
	}
	else
	{
		ft_putchar(base[nb % 10]);
		i++;
	}
	return (i);
}

int	ft_args_is_base_ten(va_list args)
{
	int	ret;
	int	p;

	ret = 0;
	p = va_arg(args, int);
	ret += ft_putnbr(p);
	return (ret);
}
