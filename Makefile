NAME    = push_swap
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRC     = operation_part_one.c ft_atoi.c utlis.c operation_part_two.c  operation_part_four.c  operation_part_three.c push_swap.c

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
