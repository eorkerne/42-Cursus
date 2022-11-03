/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:58:53 by maarroud          #+#    #+#             */
/*   Updated: 2022/11/03 16:59:15 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	size_t	i;
	size_t	ret;

	ret = 0;
	if (s)
	{
		i = 0;
		while (s[i])
		{
			ret += ft_putchar(s[i]);
			i++;
		}
	}
	return (ret);
}