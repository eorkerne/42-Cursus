/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:08:38 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/28 13:22:14 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
		{
			while (argv[1][i])
				{
					if (argv[1][i] == 'a')
					{
						write(1, "a\n", 2);
						return (0);
					}
					i++;
				}
				write(1, "\n", 1);
				return (0);
		}
	else
	{
		write(1, "a\n", 2);
		return(0);
	}
}