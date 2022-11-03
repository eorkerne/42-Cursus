/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:51:27 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/03 17:02:32 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_args_is_char(va_list args)
{
	int		ret;
	char	p;

	ret = 0;
	p = va_arg(args, int);
	ret += ft_putchar((char)p);
	return (ret);
}
