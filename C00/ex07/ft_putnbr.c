/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:04:38 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/20 13:34:39 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb < 10)
			ft_putchar(48 + nb);
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar(48 + nb % 10);
		}
	}
}

int	main(void)
{
    ft_putnbr(2147483648);
}

