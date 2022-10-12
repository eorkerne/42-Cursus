/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:22:07 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/11 16:41:45 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countset(char const *s1, char const *set)
{
	size_t	countset;
	size_t	i;
	size_t	j;

	i = 0;
	countset = 0;
	while (s1[i])
	{
		j = 0;
		if (s1[i] == set[j])
		{
			while (s1[i++] == set[j++])
				countset++;
			return (countset);
		}
		i++;
	}
	return (countset);
}

// char    *ft_strtrim(char const *s1, char const *set)
// {
// 	char    *newstr;
// 	size_t    finish;
// 	size_t    i;
// 	size_t    start;

// 	start = 0;
// 	finish = ft_strlen(s1);
// 	while (checkset(s1[start], set) == 0)
// 		start++;
// 	while (checkset(s1[finish], set) == 0)
// 		finish--;
// 	newstr = malloc(sizeof(char) * (finish - start) + 1);
// 	if (!newstr)
// 		return (NULL);
// 	i = 0;
// 	while (start < finish)
// 		newstr[i++] = s1[start++];
// 	newstr[i] = '\0';
// 	return (newstr);
// }

#include <stdio.h>

int main(void)
{
	char	*s1 = "tripouille   xxx";
	char	*set = " x";

	printf("%d\n %d\n", ft_countset(s1, set), ft_countset(s1 + ft_countset(s1, set), set));
	return (0);
}

