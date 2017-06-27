/*
** search_char.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Jun 26 11:50:03 2017 HORBACZ Nicolas
** Last update Mon Jun 26 11:54:43 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list          *search_char(t_list *list, char *value)
{
  t_list *tmp;

  tmp = list;
  while (tmp != NULL)
    {
      if (tmp->value == value)
	return tmp;
      tmp = tmp->next;
    }
  my_putstr("\nValeur non presente dans la liste chainee\n");
  return list;
}
