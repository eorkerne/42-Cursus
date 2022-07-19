/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:45:29 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/19 09:54:50 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base [j] == '+' || base[j] == '-')
				return (0);
			if (base[i] == base[j])
				return (0);
			if (base [i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	recursive_nbase(unsigned int nbr_us, char *base)
{
	unsigned int		base_len;
	char				c;

	base_len = ft_strlen(base);
	if (nbr_us > base_len - 1)
		recursive_nbase(nbr_us / base_len, base);
	c = base[nbr_us % base_len];
	ft_putchar(c);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_us;

	if (check_base(base) != 1)
		return ;
	nbr_us = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr_us = -nbr;
	}
	nbr_us = nbr;
	recursive_nbase(nbr_us, base);
}

/*
int	main(void)
{
	ft_putnbr_base(-123456789, "AB");
	return (0);
}
*/