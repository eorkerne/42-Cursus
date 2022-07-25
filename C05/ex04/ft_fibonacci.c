/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:30:43 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/20 20:50:35 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index >= 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_fibonacci(5));
}
*/