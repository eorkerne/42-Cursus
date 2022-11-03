/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:47:41 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/03 16:49:19 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(const char *format, int i, va_list args)
{
	int	ret;

	i += 1;
	ret = 0;
	if (!args)
		return (ret);
	if (format[i] == 'c')
		ret += ft_args_is_char(args);
	else if (format[i] == 's')
		ret += ft_args_is_str(args);
	if (format[i] == 'p')
		ret += ft_address_pointer(args);
	else if (format[i] == 'd')
		ret += ft_args_is_dec(args);
	else if (format[i] == 'i')
		ret += ft_args_is_base_ten(args);
	else if (format[i] == 'u')
		ret += ft_args_is_unsigned(args);
	else if (format[i] == 'x')
		ret += ft_args_is_lowc_hexa(args);
	else if (format[i] == 'X')
		ret += ft_args_is_upc_hexa(args);
	else if (format[i] == '%')
		ret += ft_args_is_prct();
	return (ret);
}
