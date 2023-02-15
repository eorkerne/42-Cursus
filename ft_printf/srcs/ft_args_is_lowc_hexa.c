/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_lowc_hexa.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:51:39 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/07 15:07:20 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexalowc(unsigned int nb)
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

int	ft_args_is_lowc_hexa(va_list args)
{
	int				ret;
	unsigned int	p;

	ret = 0;
	p = va_arg(args, unsigned int);
	ret += ft_count(p);
	ft_puthexalowc(p);
	return (ret);
}
