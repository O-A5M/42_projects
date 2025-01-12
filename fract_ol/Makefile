CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC = fract_ol.c fract_events.c fract_draw.c
NAME = fractol
XFLAGS = -L/home/othman/minilibx-linux -lmlx -lX11 -lXext

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(XFLAGS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

do: all clean

.PHONY: clean
