CFLAGS = -Wall -Werror -Wextra
CC = cc
SRC = ft_putnbr_base.c ft_putuns.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_printf.c
OBJ = $(SRC:.o=.c)
NAME = libftprintf.a

all: $(NAME)

$(NAME):
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all