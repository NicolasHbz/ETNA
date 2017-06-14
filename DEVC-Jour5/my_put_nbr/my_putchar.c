/*
** my_putchar.c for my_putchar in /home/nicolas/horbac_n/my_putchar
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 12:25:11 2017 HORBACZ Nicolas
** Last update Mon Mar 20 13:43:59 2017 HORBACZ Nicolas
*/
#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}


