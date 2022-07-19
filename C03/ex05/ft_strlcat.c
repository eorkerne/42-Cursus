/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:24:35 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/16 10:32:00 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dsize;
	unsigned int	i;

	dsize = 0;
	i = 0;
	while (dest[dsize] && dsize < size)
		dsize++;
	while (src[i] && i + dsize + 1 < size)
	{
		dest[dsize + i] = src[i];
		i++;
	}
	if (dsize != size)
		dest[dsize + i] = '\0';
	return (dsize + ft_strlen(src));
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char dst[50] = "1234";
	char dst2[50] = "1234";
	char src[50] = "ABCD";

	printf("Retourne %u\n", ft_strlcat(dst, src, 3));
	 printf("dst = %s\n", dst);
	 printf("src = %s\n", src);
	printf("Retourne %lu\n", strlcat(dst2, src, 3));
	printf("dst = %s\n", dst);
	printf("src = %s\n", src);

	return (0);
}
*/