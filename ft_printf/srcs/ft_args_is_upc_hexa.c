/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_upc_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:52:57 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/07 15:02:28 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexa(unsigned int nb)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(base[nb % 16]);
	}
	else
	{
		ft_puthexa(nb / 16);
		ft_puthexa(nb % 16);
	}
}

static int	ft_count(unsigned int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb != 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

int	ft_args_is_upc_hexa(va_list args)
{
	int				ret;
	unsigned int	p;

	ret = 0;
	p = va_arg(args, unsigned int);
	ret += ft_count(p);
	ft_puthexa(p);
	return (ret);
}
