/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:15:12 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/07 18:15:12 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	newlen;

	if (len > ft_strlen(s) - start)
	{
		newlen = (ft_strlen(s) - start);
	}
	else
		newlen = len;
	// if (newlen > len)
	// 	return (NULL);
	if (len == 0 || !s)
		return (NULL);
	newstr = malloc(sizeof(char) * newlen);
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && start < len)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	return (newstr);
}
#include <stdio.h>

int	main(void)
{

	char * s = ft_substr("tripouille", 1, 1);
	printf("%s\n", s);
}