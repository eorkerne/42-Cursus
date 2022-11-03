/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_upc_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:52:57 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/03 17:03:09 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexaupc(unsigned int nb)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789ABCDEF";
	if (nb > 16)
	{
		ft_puthexaupc(nb / 16);
		ft_putchar(base[nb % 16]);
		i++;
	}
	else
	{
		ft_putchar(base[nb % 16]);
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
	ret += ft_puthexaupc(p);
	return (ret);
}
