/*
** search_int.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Jun 26 11:25:59 2017 HORBACZ Nicolas
** Last update Mon Jun 26 17:54:36 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*search_int(t_list *list, int index)
{
  t_list *tmp;

  tmp = list;
  while (tmp != NULL)
    {
      if (tmp->index == index)
	return tmp;
      tmp = tmp->next;
    }
  my_putstr("\nValeur non presente dans la liste chainee\n");
  return list;
}
