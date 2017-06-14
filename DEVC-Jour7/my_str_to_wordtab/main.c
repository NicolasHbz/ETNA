/*
** main.c for  in /home/nicolas/horbac_n/my_str_to_wordtab
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 27 13:49:53 2017 HORBACZ Nicolas
** Last update Tue Mar 28 15:07:01 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <stdlib.h>

char **my_str_to_wordtab(char *str);
void my_putstr(char *str);
void my_putchar(char c);

int main(int argc, char **argv)
{
  int i;
  char **tab;

  i = 0;
  tab = NULL;
  tab = my_str_to_wordtab(argv[1]);
  while (tab != NULL && tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
  return (0);
}
