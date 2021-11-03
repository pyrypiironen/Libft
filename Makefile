NAME = libft.a
FLAGS = -Wall -Wextra -Werror
FILES = *.c
HEADER = libft.h


all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(FILES) $(HEADER)
		ar rc $(NAME) *.o
		ranlib $(NAME)


clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME) *.gch

re: fclean all
