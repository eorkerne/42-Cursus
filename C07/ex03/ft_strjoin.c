/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:29:40 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/25 19:43:08 by maarroud         ###   ########.fr       */
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

char	*ft_strsepcat(char *dest, char *src, char *sep)
{
	int	dest_len;
	int	i;
	int	j;

	dest_len = ft_strlen(dest);
	i = 0;
	if (src)
	{
		while (src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	j = 0;
	while (sep[j] != '\0')
	{
		dest[dest_len + i + j] = sep[j];
		j++;
	}
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	if (src)
	{
		while (src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	str_sep_len(char **strs, int sep_len, int i)
{
	int	size;
	int	csep;
	int	res;

	while (strs[i] == NULL)
		i++;
	csep = 0;
	res = 0;
	while (strs[i])
	{
		size = 0;
		while (strs[i][size] != '\0')
		{
			if (strs[i] == NULL)
				i++;
			size++;
		}
		res += size;
		i++;
		csep++;
	}
	sep_len *= --csep;
	if (sep_len == 0)
		return (res);
	return (res + sep_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*new_str;
	int		len_str_sep;

	if (!sep)
		return (NULL);
	len_str_sep = str_sep_len(strs, ft_strlen(sep), 0);
	new_str = malloc(sizeof(char) * len_str_sep + 1);
	if (!new_str)
		return (NULL);
	if (size == 0)
		return (new_str);
	i = 0;
	while (i < size)
	{
		if (i == size - 1)
		{
			ft_strcat(new_str, strs[i++]);
			break ;
		}
		ft_strsepcat(new_str, strs[i++], sep);
	}
	return (new_str);
}


#include <stdio.h>

int	main(void)
{
	int		size;
	char	*sep = "///";
	char	*result;
	char	**strs;

	size = 6;
	strs = malloc(sizeof(*strs) * size);
	strs[0] = NULL;
	strs[2] = NULL;
	strs[3] = "abcd";
	strs[4] = "efgh";
	strs[5] = "448484894";
	//strs[0] = "gnah";
	//strs[1] = "gnoh";
	result = ft_strjoin(6, strs, sep);
	printf("%s\n", result);
	free(strs);
	free(result);
	//system("leaks a.out");
}
