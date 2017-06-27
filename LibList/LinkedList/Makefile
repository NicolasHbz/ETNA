CC = 	gcc
NAME =	library
SRC =	add_element.c \
	create_list.c \
	delete_element.c \
	delete_list.c \
	my_putchar.c \
	my_putstr.c \
	search_char.c \
	search_int.c \
	my_put_nbr.c \
	main.c
OBJ =   $(SRC:%.c=%.o)
RM =    rm -f

$(NAME):		$(OBJ)
			ar r libmy.a *.o

all:			$(NAME)

.PHONY:			all run clean test

clean:
			$(RM) $(OBJ) *~

fclean:			clean
			$(RM) $(NAME)

re:			fclean all
