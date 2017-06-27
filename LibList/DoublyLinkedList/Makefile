CC = 	gcc
NAME =	library
SRC =	add_element_at_head.c \
	add_element_at_tail.c \
	create_doubly_list.c \
	delete_element_from_doubly_list.c \
	delete_doubly_list.c \
	get_list_length.c \
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
