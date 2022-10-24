/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:15:12 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/24 15:44:54 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_fslen(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (start < ft_strlen(s) && i < len)
	{
		start++;
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s) || ft_strlen(s) == 0 || len == 0)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	len = ft_fslen(s, start, len);
	str = malloc(sizeof(char) * (len) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] && (i < len))
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
