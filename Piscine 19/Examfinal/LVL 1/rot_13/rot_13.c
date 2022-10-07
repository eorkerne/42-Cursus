/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:48:07 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/03 10:54:43 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm'
			|| argv[1][i] >= 'A' && argv[1][i] <= 'M')
			{
				argv[1][i] += 13;
			}
			else if (argv[1][i] > 'm' && argv[1][i] <= 'z'
			|| argv[1][i] > 'M' && argv[1][i] <= 'Z')
			{
				argv[1][i] -= 13;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
