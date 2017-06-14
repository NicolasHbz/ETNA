/*
** main.c for  in /home/nicolas/horbac_n/my_tablen
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Mar 21 11:24:23 2017 HORBACZ Nicolas
** Last update Tue Mar 21 11:41:47 2017 HORBACZ Nicolas
*/
#include <stdio.h>

int  my_tablen(char tab[]);

int   main()
{
  char tab[4] = {'a', 'b', 'c', '\0'};
  printf("%d\n", my_tablen(tab));
  return (0);
}
