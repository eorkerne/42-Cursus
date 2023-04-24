/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:29:14 by maarroud          #+#    #+#             */
/*   Updated: 2023/04/24 15:07:26 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_list	*stash = NULL;
	char			*line;
	int				readed;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
		return (NULL);
	line = NULL;
	readed = 1;
	read_and_stash(fd, &stash, &readed);
	if (stash == NULL)
		return (NULL);
	// 1 : read the file and stock information into the stash untill encounter \n, count every bytes readed to allocate memory
	// 2 : 
	return (line);
}

void	read_and_stash(int fd, t_list **stash, int *readed)
{
	char	*buff;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return ;
	while (!found_newline(*stash) && *readed != 0)
	{
		*readed = (int)read(fd, buff, BUFFER_SIZE);
		if (*stash == NULL && *readed == 0 || *readed == -1)
		{
			free(buff);
			return ;
		}
		buff[readed] = '\0';
	}
	return ;
}
