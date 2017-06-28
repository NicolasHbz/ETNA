/*
** delete_element.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Jun 24 20:33:08 2017 HORBACZ Nicolas
** Last update Mon Jun 26 17:53:53 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*delete_element_from_doubly_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  if (list == NULL)
    {
      return tmp;
    }
  else if (list->next == NULL || list->prev == NULL)
    {
      if (list->next == NULL)
	{
	  tmp = list->prev;
	  list->prev->next = NULL;
	}
      else
	{
	  tmp = list->next;
	  list->next->prev = NULL;
	}
    }
  else
    {
      tmp = list->prev;
      list->prev->next = list->next;
      list->next->prev = list->prev;
    }
  free(list);
  return tmp;
}
