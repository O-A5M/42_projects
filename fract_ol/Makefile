CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC = fract_ol.c fract_events.c fract_pixel_put.c fract_math.c
NAME = fractol
XFLAGS = -L/home/oakhmouc/minilibx-linux -lmlx -lX11 -lXext

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(XFLAGS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

do: all clean

.PHONY: clean
