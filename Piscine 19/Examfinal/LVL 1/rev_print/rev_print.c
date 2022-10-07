/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:38:32 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/28 15:47:27 by maarroud         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		while (argv[1][--i] > 0)
			write(1, &argv[1][i], 1);
		write (1, "\n", 1);
		return (0);
	}
	else
		write (1, "\n", 1);
	return (0);
}