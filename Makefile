CC = cc 
CFLANGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -rf
ARC = ar rcs
SRC = ft_printf.c help_ft.c print_addr.c
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