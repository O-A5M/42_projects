CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC = fract_ol.c fract_events.c
OBJ = $(SRC:.c=.o)
NAME = fractol

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: clean
