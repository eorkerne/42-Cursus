/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:15:12 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/08 12:38:46 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (len < start)
		newstr = malloc(sizeof(char) * (len + 1));
	else
		newstr = malloc(sizeof(char) * (len + 1) - start);
	if (!newstr || !s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		newstr[0] = '\0';
		return (newstr);
	}
	i = 0;
	while (s[start] && i < len)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str = strdup("012345678");
// 	char	*s = ft_substr(str, 5, 15);
// 	printf("%s\n", s);
// }