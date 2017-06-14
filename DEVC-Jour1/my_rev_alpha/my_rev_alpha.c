/*
** my_aff_alpha.c for  in /home/nicolas/horbac_n/my_aff_alpha
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 17:20:31 2017 HORBACZ Nicolas
** Last update Mon Mar 20 18:05:56 2017 HORBACZ Nicolas
*/
#include <unistd.h>

void my_putchar(char c);

void  my_rev_alpha()
{
  char i;

  i = 'z';
    while (i != 96)
      {
	my_putchar(i);
	i = i - 1;
      }
}
