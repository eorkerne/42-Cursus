/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_lowc_hexa.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:51:39 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/03 17:02:44 by maarroud         ###   ########.fr       */
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

int	ft_args_is_lowc_hexa(va_list args)
{
	int				ret;
	unsigned int	p;

	ret = 0;
	p = va_arg(args, unsigned int);
	ret += ft_puthexalowc(p);
	return (ret);
}
