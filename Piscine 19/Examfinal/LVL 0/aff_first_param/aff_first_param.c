/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:23:10 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/03 10:51:03 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int main(int argc, char **argv)
{
	if (argc < 2)
		{
			ft_putstr("\n");
			return (0);
		}
	else
	{
		ft_putstr(argv[1]);
		ft_putstr("\n");
	}
	return (0);
}