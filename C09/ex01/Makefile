# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 15:40:31 by maarroud          #+#    #+#              #
#    Updated: 2022/07/26 19:26:01 by maarroud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	srcs/ft_putchar.c \
		  		srcs/ft_swap.c \
		  		srcs/ft_putstr.c \
		  		srcs/ft_strlen.c \
		  		srcs/ft_strcmp.c

HEADERS		= includes/

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}
			
all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re