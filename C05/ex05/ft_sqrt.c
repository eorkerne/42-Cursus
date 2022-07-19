/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:11:28 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/19 10:08:21 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	i;
	long int	long_nb;

	i = 0;
	long_nb = nb;
	while (i * i <= long_nb)
	{
		if (i * i == long_nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	printf("%d\n", ft_sqrt(-100));
}
*/