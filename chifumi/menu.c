/*
** menu.c for  in /home/nicolas/horbac_n/chifumi
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Fri Mar 31 10:31:04 2017 HORBACZ Nicolas
** Last update Fri Mar 31 15:41:29 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

void	menu(int argc, char **argv)
{
  int   i;
  int   version;
  int   duree;

  while (i < argc) //gestion argument 1
    {
      if (my_strcmp(argv[2], "classique") == 0)
	version = 0;
      if (my_strcmp(argv[2], "expert") == 0)
	version = 1;
      i++;
    }
  duree = *argv[4] - 48;
  printf("%d \n", version);
  printf("%d \n", duree);
}

  
