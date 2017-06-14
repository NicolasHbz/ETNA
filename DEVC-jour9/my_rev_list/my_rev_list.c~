/*
** my_list_size.c for  in /home/nicolas/horbac_n/my_list_size
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 29 15:57:28 2017 HORBACZ Nicolas
** Last update Wed Mar 29 16:50:57 2017 HORBACZ Nicolas
*/

#include <stdlib.h>

typedef struct  s_list
{
  void          *data;
  struct s_list *next;
}               t_list;

t_list          *add_list(t_list *list, char *data)
{
  t_list        *node;

  node = malloc(sizeof(t_list));
  if (node == NULL)
    return(NULL);
  node->next = list;
  node->data = data;
  return (node);
}

int		my_list_size(t_list *begin)
{
  t_list	*temp;
  int           i;

  i = 0;
  temp = begin;
  while (temp != NULL)
    {
      i++;
      temp = temp->next;
    }
  return (i);
}
