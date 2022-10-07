/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:45:37 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/25 19:43:01 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	cpy = malloc(sizeof(char) * ft_strlen(src) + 1);
	i = 0;
	if (!cpy)
		return (0);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello world!";
	printf("%s\n", str);
	printf("%s\n", ft_strdup(str));
}
*/