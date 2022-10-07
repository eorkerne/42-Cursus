/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:11:20 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/03 10:51:03 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

int main(void)
{
	char *s2 = "Salut";
	int t = ft_strlen(s2);
	char s1[t];
	printf("%s\n", ft_strcpy(s1, s2));
}
*/