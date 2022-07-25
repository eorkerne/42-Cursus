/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:45:29 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/21 11:13:20 by maarroud         ###   ########.fr       */
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

void	recursive_nbase(unsigned int nbr, char *base)
{
	unsigned int		base_len;
	char				c;

	base_len = ft_strlen(base);
	if (nbr > base_len - 1)
		recursive_nbase(nbr / base_len, base);
	c = base[nbr % base_len];
	ft_putchar(c);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_us;

	nbr_us = nbr;
	if (check_base(base) != 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr_us *= -1;
	}
	recursive_nbase(nbr_us, base);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <limits.h>


int		main(void)
{
	// base binaria
	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
	ft_putnbr_base(47, "01");
	ft_putchar('\n');
	printf("Esperado: 101111\n");
	ft_putnbr_base(47, "\\/");
	ft_putchar('\n');
	printf("Esperado: /\\////\n");
	// base 5
	printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
	ft_putnbr_base(36, "01345");
	ft_putchar('\n');
	printf("Esperado: 131\n");
	ft_putnbr_base(36, "sd2ek");
	ft_putchar('\n');
	printf("Esperado: d2d\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
	ft_putnbr_base(INT_MIN, "0123456789");
	ft_putchar('\n');
	printf("Esperado: -2147483648\n");
	ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
	ft_putchar('\n');
	printf("Esperado: -;.]}]@\\{]@\n");
	// base 16
	printf("Bases 16, n = -65040. \"0123456789ABCDEF\" e \"jdlskmnMKZxVuzfa\"\n");
	ft_putnbr_base(-65040, "0123456789ABCDEF");
	ft_putchar('\n');
	printf("Esperado: -FE10\n");
	ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
	ft_putchar('\n');
	printf("Esperado: -afdj\n");
	// base 0 e base 1, nao pode aparecer nada
	printf("Bases 0 e 1, nao deve aparecer nada, n = 256.\n");
	ft_putnbr_base(-29092, "0");
	ft_putnbr_base(-29092, "");
	return (0);
}
*/