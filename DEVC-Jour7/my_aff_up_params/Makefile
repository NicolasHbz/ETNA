CC = 	gcc
NAME =	aff_up
SRC =	my_putchar.c \
	my_aff_up_params.c \
	main.c 

OBJ =   $(SRC:%.c=%.o)
CFLAGS = -W -Wall -Wextra -Werror
RM =    rm -f

$(NAME):		$(OBJ)
			$(CC) $(OBJ) -o $(NAME)


all:			$(NAME)

clean:
			$(RM) $(OBJ) *~

fclean:			clean
			$(RM) $(NAME)
