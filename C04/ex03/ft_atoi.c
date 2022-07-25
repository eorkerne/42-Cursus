/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:29:37 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/20 19:30:12 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (sign * nb);
}
