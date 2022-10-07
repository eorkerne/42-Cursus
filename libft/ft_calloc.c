/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:21:46 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/07 16:55:00 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*am;
	size_t	res;

	res = count * size;
	if (size != (res / count))
		return (NULL);
	am = malloc(count * size);
	if (!am)
		return (NULL);
	ft_bzero(am, size * count);
	return (am);
}
