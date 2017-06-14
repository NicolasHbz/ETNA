/*
** main.c for main.c in /home/nicolas/horbac_n/my_putchar
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 12:47:14 2017 HORBACZ Nicolas
** Last update Mon Mar 20 15:50:20 2017 HORBACZ Nicolas
*/
#include <unistd.h>

char   my_prev_char(char c);
void   my_putchar(char c);

int    main()
{
  my_putchar(my_prev_char('d'));
  my_putchar(my_prev_char('A'));
  my_putchar(my_prev_char('3'));
  my_putchar(my_prev_char('S'));
  my_putchar('\n');
  return (0);
}
