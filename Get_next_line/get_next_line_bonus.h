/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:12:39 by maarroud          #+#    #+#             */
/*   Updated: 2023/07/21 21:26:34 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
// # include <stdio.h>
// # include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
int		ft_strlen(const char *str);
int		ft_strlen_return(char *buffer);
char	*add_buffer(char *line, char *buffer);
int		is_endl(char *buffer);
char	*readed_and_free(int readed, char *buffer, char *line, int fd);

#endif