NAME = libft.a
FLAGS = -Wall -Wextra -Werror
FILES = *.c
HEADER = libft.h


all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(FILES) $(HEADER)
		ar rc $(NAME) *.o
		ranlib $(NAME)
		gcc -L. -lft
		./a.out

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME) *.gch

re: fclean all
