/*
** my_add_list_to_list.c for  in /home/nicolas/horbac_n/my_add_list_to_list
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 30 22:31:12 2017 HORBACZ Nicolas
** Last update Thu Mar 30 23:32:35 2017 HORBACZ Nicolas
*/

#include <stdlib.h>
#include "my_list.h"

t_list		*add_list(t_list *list, char *data)
{
  t_list	*node;

  node = malloc(sizeof(t_list));
  if (node == NULL)
    return(NULL);
  node->next = list;
  node->data = data;
  return (node);
}

void		my_add_list_to_list(t_list **begin1,t_list *begin2)
{
  t_list	*temp;

  temp = *begin1;
  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = begin2;
}
