/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:52:53 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/03 17:03:01 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(unsigned int nb)
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

int	ft_args_is_unsigned(va_list args)
{
	int				ret;
	unsigned int	p;

	ret = 0;
	p = va_arg(args, unsigned int);
	ret += ft_putnbr(p);
	return (ret);
}
