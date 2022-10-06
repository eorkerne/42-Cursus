/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:01:33 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/06 22:05:30 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dsize;
	unsigned int	i;

	dsize = 0;
	i = 0;
	while (dst[dsize] && dsize < dstsize)
		dsize++;
	while (src[i] && i + dsize + 1 < dstsize)
	{
		dst[dsize + i] = src[i];
		i++;
	}
	if (dsize != dstsize)
		dst[dsize + i] = '\0';
	return (dsize + ft_strlen(src));
}
