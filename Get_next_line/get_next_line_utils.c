/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:29:21 by maarroud          #+#    #+#             */
/*   Updated: 2023/07/25 13:19:02 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_strlen_return(char *buffer)
{
	int	i;

	i = 0;
	while (buffer && buffer[i] != '\n' && buffer[i])
		i++;
	return (i);
}

char	*add_buffer(char *line, char *buffer)
{
	char	*res;
	int		i;
	char	*to_free;

	to_free = line;
	i = 0;
	res = malloc(ft_strlen(line) + ft_strlen_return(buffer) + 2);
	if (!res)
		return (NULL);
	while (line && *line)
		res[i++] = *line++;
	while (buffer && *buffer && *buffer != '\n')
	{
		res[i++] = *buffer++;
	}
	res[i++] = *buffer;
	res[i] = 0;
	if (to_free)
		free(to_free);
	return (res);
}

int	is_endl(char *buffer)
{
	int	i;

	i = 0;
	while (buffer && buffer[i] != '\n' && buffer[i])
		i++;
	return (buffer[i]);
}

char	*readed_and_free(int readed, char *buffer, char *line, int fd)
{
	while (readed)
	{
		readed = read(fd, buffer, BUFFER_SIZE);
		line = add_buffer(line, buffer);
		if (readed == 0 && ft_strlen(line) == 0)
		{
			free(line);
			return (NULL);
		}	
		if (is_endl(buffer))
			return (line);
	}
	return (line);
}
