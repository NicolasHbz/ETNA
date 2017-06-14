/*
** my_rm_all_eq_from_list.c for  in /home/nicolas/horbac_n/my_rm_all_eq_from_list
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 30 22:05:17 2017 HORBACZ Nicolas
** Last update Thu Mar 30 22:05:35 2017 HORBACZ Nicolas
*/

#include <stdlib.h>
#include "my_list.h"

int		my_strcmp(char *s1, char *s2);

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

void		my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
  t_list	*temp;
  t_list	*remove;

  temp = *begin;
  remove = temp->next;
  while (remove != NULL)
    {
      if (cmp(remove->data, data_ref) == 0)
	{
	  temp->next = remove->next;
	  free(remove);
	  remove = temp->next;
	}
      else
	{
	  temp = remove;
	  remove = temp->next;
	}
    }
}
