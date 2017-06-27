/*
** createList.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Jun 20 15:58:59 2017 HORBACZ Nicolas
** Last update Tue Jun 27 20:47:58 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*create_list(int index, char *value)
{
  t_list	*list;

  list = malloc(sizeof(*list));
  if (list == NULL)
    return 0;
  list->index = index;
  list->value = value;
  return list;
}
