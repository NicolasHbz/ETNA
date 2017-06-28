/*
** parse_args.c for  in /home/nicolas/Documents/etna/LibParse
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Jun 27 23:15:02 2017 HORBACZ Nicolas
** Last update Wed Jun 28 00:37:34 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*parse_args(int argc, char **argv, int args_required)
{
  int		i;
  t_list	*results;

  i = 0;
  if (argc != (args_required + 1))
    {
      return NULL;
    }
  else
    {
      results = create_doubly_list((i +1), argv[i + 1]);
      while (i < (argc - 2))
	{
	  i++;
	  results = add_element_at_tail(results, (i + 1), argv[i + 1]);
	}
      return results;
    }
}
