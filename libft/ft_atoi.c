/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:19:06 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/20 17:15:39 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	long long int	nb;
	size_t			i;
	long long int	tmp;

	i = 0;
	nb = 0;
	sign = 1;
	tmp = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = sign * -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = nb;
		nb = nb * 10 + (str[i++] - 48);
		if (tmp > nb && sign == -1)
			return (0);
		if (tmp > nb && sign == 1)
			return (-1);
	}
	return (sign * nb);
}
