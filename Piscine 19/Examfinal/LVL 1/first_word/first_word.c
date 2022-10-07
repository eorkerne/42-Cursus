/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:36:18 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/28 14:47:53 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] != ' ')
			{
				write(1, &argv[1][i], 1);
				i++;
				if (argv[1][i] == ' ')
				{
					write(1, "\n", 1);
					return (0);
				}
			}
			else
				i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (0);
}