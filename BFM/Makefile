##
## Makefile for  in /home/nicolas/BFM
## 
## Made by HORBACZ Nicolas
## Login   <horbac_n@etna-alternance.net>
## 
## Started on  Wed May 10 11:37:24 2017 HORBACZ Nicolas
## Last update Wed May 10 12:03:00 2017 HORBACZ Nicolas
##

CC =    gcc -g
NAME =  my_ftl
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
	my_strdup.c \
	my_str_to_wordtab.c
OBJ =   $(SRC:%.c=%.o)
CFLAGS = -W -Wall -Wextra -Werror  
RM =    rm -rf

$(NAME):        $(OBJ)
		$(CC) $(OBJ) -o $(NAME)
all:    	$(NAME) clean

.PHONY: 	all run clean test
clean:
		$(RM) *.o

fclean:         clean
		$(RM) $(NAME)
