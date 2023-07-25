/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:29:14 by maarroud          #+#    #+#             */
/*   Updated: 2023/07/25 17:30:08 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[OPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;
	int			endl_pos;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
		return (NULL);
	line = NULL;
	if (buffer[fd][0] != 0)
	{
		i = -1;
		endl_pos = ft_strlen_return(buffer[fd]) + 1;
		while (buffer[fd][endl_pos + i++])
			buffer[fd][i] = buffer[fd][endl_pos + i];
		buffer[fd][i] = '\0';
		line = add_buffer(line, buffer[fd]);
		if (ft_strlen(line) > ft_strlen_return(line))
			return (line);
	}
	return (readed_and_free(1, buffer[fd], line, fd));
}

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	line = NULL;
// 	fd = open("bolognaise", O_RDONLY);
// 	while (1)
// 	{
// 		(line = get_next_line(fd));
// 		printf("[%s]", line);
// 		if (!line)
// 			break ;
// 	}
// 	close(fd);
// }
