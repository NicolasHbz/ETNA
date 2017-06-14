/*
** main.c for  in /home/nicolas/horbac_n/my_find_elm_eq_in_list
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 30 10:10:53 2017 HORBACZ Nicolas
** Last update Thu Mar 30 21:58:35 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <stdlib.h>
#include "my_list.h"

t_list		*add_list(t_list *list, char *data);
int		my_strcmp(char *s1, char *s2);
void            my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)());
void		my_putstr(char *str);
void		my_putchar(char c);

int main ()
{
  t_list	*list;
  t_list       	*temp;

  list = NULL;
  list = add_list(list, "a");
  list = add_list(list, "b");
  list = add_list(list, "c");
  list = add_list(list, "d");
  list = add_list(list, "b");
  list = add_list(list, "e");
  temp = list;
  
  my_rm_all_eq_from_list(&list, "b", &my_strcmp);
  
  while (temp != NULL)
    {
      printf("%s \n", (char *)temp->data);
      temp = temp ->next;
    } 
  return(0);
}
  
