/*
** main.c for  in /home/nicolas/horbac_n/my_find_elm_eq_in_list
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 30 10:10:53 2017 HORBACZ Nicolas
** Last update Thu Mar 30 13:48:20 2017 HORBACZ Nicolas
*/

#include <stdlib.h>
#include "my_list.h"

t_list		*add_list(t_list *list, char *data);
int		my_strcmp(char *s1, char *s2);
void            *my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)());
void		my_putstr(char *str);

int main ()
{
  t_list	*list;
  char		*temp;

  list = NULL;
  list = add_list(list, "a");
  list = add_list(list, "b");
  list = add_list(list, "c");
      
  temp = my_find_elm_eq_in_list(list, "b", &my_strcmp);
  my_putstr(temp);  
  return(0);
}
  
