NAME = libft.a
FLAGS = -Wall -Werror -Wextra
SRC = *.c
OBJ = *.o


all: ft_*.c
	ar cr *.o -o $(NAME)

$(OBJ): $(SRC)
	cc -c *.c

$(NAME):
	cc $(FLAGS) main.c libft.a

clean:
	rm -f *.o

fclean:
	rm -f *.o $(NAME)

re:
	fclean all
