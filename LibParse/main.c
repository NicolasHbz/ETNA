/*
** main.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Jun 20 16:58:53 2017 HORBACZ Nicolas
** Last update Wed Jun 28 00:41:24 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char *argv[]) {
  int		i;
  int		args_required = 3;  // nombre de paramètres que nous voulons
  t_list	*results;  // la liste des résultats finaux
  int		list_length;
  t_list	*tmp;
  
  results = parse_args(argc, argv, args_required);
  tmp = results;
  list_length = get_list_length(results);
  my_put_nbr(list_length);
  if (results == NULL)
    {
      my_putstr("ERROR : test failed\n");
    }
  else
    {
      my_putstr("OK : test passed\n");
      my_putstr("Program arguments are : \n");
      for (i = 0; i < list_length; i++)
	{
	  my_put_nbr(results->index);
	  my_putstr(" -> ");
	  my_putstr(results->value);
	  my_putchar('\n');
	  results = results->next;
	}
    }
  free(results);
  return 0;
}
