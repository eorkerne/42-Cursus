/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:29:37 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/13 15:30:42 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' && str[i] == '\f' && str[i] == '\r'
		&& str[i] == '\n' && str[i] == '\t' && str[i] == '\v')
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
/*
int main(void)
{
	char test[] = "---12345avc845";

	printf("%d", ft_atoi(test));
}
*/