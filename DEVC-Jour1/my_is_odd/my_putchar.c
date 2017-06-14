/*
** my_putchar.c for  in /home/nicolas/horbac_n/my_is_odd
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 16:54:47 2017 HORBACZ Nicolas
** Last update Mon Mar 20 16:55:31 2017 HORBACZ Nicolas
*/
#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
