/*
** main.c for main.c in /home/nicolas/horbac_n/my_putchar
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 12:47:14 2017 HORBACZ Nicolas
** Last update Mon Mar 20 14:22:18 2017 HORBACZ Nicolas
*/
#include <unistd.h>

char   my_next_char(char c);
void   my_putchar(char c);

int    main()
{
  my_putchar(my_next_char('c'));
  my_putchar(my_next_char('Z'));
  my_putchar(my_next_char('3'));
  my_putchar(my_next_char('R'));
  my_putchar('\n');
  return (0);
}
