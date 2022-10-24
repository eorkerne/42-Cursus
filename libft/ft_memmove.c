/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:30:10 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/20 16:54:23 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;

	if (!(dst) && !(src))
		return (NULL);
	i = 0;
	if (((unsigned char *) dst) < ((const unsigned char *) src))
	{
		while (i < len)
		{
			((unsigned char *) dst)[i] = ((const unsigned char *) src)[i];
			i++;
		}
	}
	else
		while (len--)
			((unsigned char *) dst)[len] = ((const unsigned char *) src)[len];
	return (dst);
}
