# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 13:50:31 by maarroud          #+#    #+#              #
#    Updated: 2022/10/07 12:53:37 by maarroud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
LIB		= ar rcs

SRCS_P1 = ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c \
	ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strlcpy.c \
	ft_memchr.c ft_memcmp.c \
	ft_strlcat.c ft_strnstr.c \
	


OBJS_P1 = $(SRCS_P1:.c=.o)
OBJS_B	= $(SRCS_B:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS_P1) $(OBJS_P2)
	$(LIB) $@ $^

bonus:		$(OBJS_B)
			$(LIB) $(NAME) $(OBJS_B)

norm:
	norminette

clean:
	rm -f $(OBJS_P1) $(OBJS_P2) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re