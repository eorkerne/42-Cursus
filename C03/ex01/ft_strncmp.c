/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:19:51 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/16 19:37:35 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] - s2[i] != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}


int main (void)
{
	 printf("%d\n", ft_strncmp("\200", "\0", 2));
	 printf("%d\n",    strncmp("\200", "\0", 2));

	 printf("%d\n", ft_strncmp("a", "b", 1));
	 printf("%d\n",    strncmp("a", "b", 1));

	 printf("%d\n", ft_strncmp("b", "a", 1));
	 printf("%d\n",    strncmp("b", "a", 1));

}
