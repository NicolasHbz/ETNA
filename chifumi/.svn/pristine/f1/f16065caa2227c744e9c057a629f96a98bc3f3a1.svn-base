CC = 	gcc
NAME =	library
SRC =	my_putchar.c \
	my_isneg.c \
	my_put_nbr.c \
	my_swap.c \
	my_putstr.c \
	my_strlen.c \
	my_getnbr.c \
        my_strcpy.c \
        my_strncpy.c \
        my_strcmp.c \
        my_strncmp.c \
        my_strcat.c \
        my_strncat.c \
        my_strstr.c \
	my_str_to_wordtab.c \
	readLine.c \
	error_manage.c \
	add_list.c \
	menu.c \
	choice.c \
	winner.c \
	display_score.c
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
