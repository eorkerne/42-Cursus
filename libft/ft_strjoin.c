/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:32:40 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/11 13:43:47 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	newlen;
	size_t	i;
	size_t	count;

	newlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(sizeof(char) * newlen + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	count = 0;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
		count++;
	}
	i = 0;
	while (s2[i])
		newstr[count++] = s2[i++];

	newstr[count] = '\0';
	return (newstr);
}
