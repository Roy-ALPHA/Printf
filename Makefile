CC = cc 
CFLANGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -rf
ARC = ar rcs
SRC = ft_printf.c	handle_unsigned.c	print_hex_x.c	write_char.c \
		ft_putnbr.c	print_addr.c  print_hex_X.c  write_str.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(ARC) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
fclean:
	$(RM) $(NAME)
re: clean all

.PHONY: all clean fclean re