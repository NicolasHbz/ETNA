/*
** main.c for  in /home/nicolas/horbac_n/my_add_list_to_list
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 30 22:23:04 2017 HORBACZ Nicolas
** Last update Thu Mar 30 23:22:15 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <stdlib.h>
#include "my_list.h"

t_list		*add_list(t_list *list, char *data);
int		my_strcmp(char *s1, char *s2);
void		my_add_list_to_list(t_list **begin1,t_list *begin2);
void		my_putstr(char *str);
void		my_putchar(char c);

int main ()
{
  t_list	*list;
  t_list	*list2;
  t_list       	*temp;

  list = NULL;
  list = add_list(list, "a");
  list = add_list(list, "b");
  list = add_list(list, "c");
  list = add_list(list, "d");
  list = add_list(list, "d");
  list = add_list(list, "e");

  list2 = NULL;
  list2 = add_list(list2, "f");
  list2 = add_list(list2, "g");
  list2 = add_list(list2, "h");
  list2 = add_list(list2, "i");

  my_add_list_to_list(&list,list2);
    
  temp = list;
  
  while (temp != NULL)
    {
      printf("%s \n", (char *)temp->data);
      temp = temp ->next;
    } 
  return(0);
}
  
