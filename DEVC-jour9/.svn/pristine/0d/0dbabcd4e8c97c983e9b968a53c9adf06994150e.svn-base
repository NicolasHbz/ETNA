/*
** my_params_in_list.c for  in /home/nicolas/horbac_n/my_params_in_list
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 29 10:54:30 2017 HORBACZ Nicolas
** Last update Wed Mar 29 15:18:38 2017 HORBACZ Nicolas
*/

#include <stdlib.h>

typedef struct  s_list
{
  void          *data;
  struct s_list *next;
}               t_list;

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

t_list		*my_params_in_list(int argc, char **argv)
{
  t_list	*list;
  int		i;

  i = 0;
  list = NULL;
  while (i < argc)
    {
      list = add_list(list, argv[i]);
      i++;
    }
  return (list);
}
