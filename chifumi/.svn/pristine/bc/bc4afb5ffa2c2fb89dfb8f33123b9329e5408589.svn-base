/*
** gestionErreurs.c for  in /home/nicolas/horbac_n/chifumi
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Fri Mar 31 14:59:36 2017 HORBACZ Nicolas
** Last update Fri Mar 31 19:13:23 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int	error_manage(int argc, char **argv)
{
  int   temp;
  int	duration;

  temp = 1;
  if (argc != 5) //gestion nombre d'arguments
    return (0);
  if (my_strcmp(argv[2], "classique") == 0) //gestion argument 1
    temp = 0;
  if (my_strcmp(argv[2], "expert") == 0)
    temp = 0;
  if (temp)
    return (0);
  duration = *argv[4] - 48; 
  if (duration % 2 == 0) //gestion argument 2
   return (0);
  return (1);
}
