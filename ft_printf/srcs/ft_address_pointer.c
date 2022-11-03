/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:50:59 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/03 17:10:41 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexalowc(unsigned int nb)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (nb > 16)
	{
		ft_puthexalowc(nb / 16);
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

int	ft_address_pointer(va_list args)
{
	int				ret;
	unsigned int	p;

	ret = 0;
	p = va_arg(args, unsigned long int);
	ret += ft_putstr("0x");
	ret += ft_puthexalowc(p);
	return (ret);
}
