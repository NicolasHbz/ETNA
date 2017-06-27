/*
** delete_list.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Jun 24 17:52:21 2017 HORBACZ Nicolas
** Last update Mon Jun 26 14:32:15 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*delete_list(t_list *list)
{
  t_list	*tmp;
  
  while (list != NULL)
    {
      tmp = list;
      list = list->next;
      free(tmp);
    }
  return NULL;
}
