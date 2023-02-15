/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:50:59 by maarroud          #+#    #+#             */
/*   Updated: 2023/02/15 15:53:25 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexalowc(unsigned long int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(base[nb % 16]);
	}
	else
	{
		ft_puthexalowc(nb / 16);
		ft_puthexalowc(nb % 16);
	}
}

static int	ft_count(unsigned long int nb)
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

int	ft_address_pointer(va_list args)
{
	int					ret;
	unsigned long int	p;

	ret = 0;
	p = va_arg(args, unsigned long int);
	ret += ft_putstr("0x");
	ft_puthexalowc(p);
	ret += ft_count(p);
	return (ret);
}
