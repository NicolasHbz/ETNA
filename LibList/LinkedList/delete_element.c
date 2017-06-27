/*
** delete_element.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Jun 24 20:33:08 2017 HORBACZ Nicolas
** Last update Sat Jun 24 20:52:45 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*delete_element(t_list *list)
{
  t_list	*tmp;

  if (list != NULL)
    {
      tmp = list->next;
      free(list);
      return tmp;
    }
  else
    {
      return list;
    }
}
  
      
  

  
