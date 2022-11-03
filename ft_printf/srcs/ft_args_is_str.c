/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_is_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:51:46 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/03 17:02:55 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_args_is_str(va_list args)
{
	int		ret;
	char	*p;

	ret = 0;
	p = va_arg(args, char *);
	if (!p)
		return (ft_putstr("(null)"));
	ret += ft_putstr(p);
	return (ret);
}
