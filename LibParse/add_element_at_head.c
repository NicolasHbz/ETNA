/*
** add_element.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Jun 20 17:45:02 2017 HORBACZ Nicolas
** Last update Mon Jun 26 15:44:59 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*add_element_at_head(t_list *list, int index, char *value)
{
  t_list	*element;

  element = malloc(sizeof(*element));
  if (element == NULL)
    return 0;
  if (list->next != NULL)
    {
      my_putstr("impossible d'ajouter l'element");
      return 0;
    }
  element->index = index;
  element->value = value;
  element->prev = list;
  list->next = element;
  return element;
}
