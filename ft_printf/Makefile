NAME	= libftprintf.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
LIB		= ar rcs
DIR		= srcs/

SRCS = 	$(DIR)ft_address_pointer.c $(DIR)ft_args_is_base_ten.c \
		$(DIR)ft_args_is_char.c $(DIR)ft_args_is_dec.c \
		$(DIR)ft_args_is_lowc_hexa.c $(DIR)ft_args_is_prct.c \
		$(DIR)ft_args_is_str.c $(DIR)ft_args_is_unsigned.c \
		$(DIR)ft_args_is_upc_hexa.c $(DIR)ft_conversion.c \
		$(DIR)ft_printf.c $(DIR)ft_putstr.c \
		$(DIR)ft_putchar.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(LIB) $@ $^

norm:
	norminette

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re norm