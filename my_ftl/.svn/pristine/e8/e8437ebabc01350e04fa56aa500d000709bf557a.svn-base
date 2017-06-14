/*
** game.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Apr 13 09:53:22 2017 HORBACZ Nicolas
** Last update Sat Apr 15 09:43:21 2017 HORBACZ Nicolas
*/

#include <stdlib.h>
#include "ftl.h"
#include "function.h"

static const t_orders_command   orders_command[] =
  {
    {"jump", jump},
    {"attack", attack},
    {NULL, NULL}
  };

void				orders(t_ship *ship, int *enemy_presence, t_enemy *enemy)
{
  char                          *read;
  int                           i;
  int				valid_order;

  valid_order = 1;
  while (valid_order)
    {
      i = 0;
      my_putstr("waiting_for_orders (attack/ jump/ detect/ getbonus)>");
      read = readLine();
      if (read == NULL)
	{
	  my_putstr("[SYSTEM FAILURE] : le lecteur de commande est bloque");
	  return;
	}
      my_putchar('\n');
      while (orders_command[i].orders != NULL)
	{
	  if ((*enemy_presence) && (my_strcmp(read, "jump") == 0))
	    {
	      my_putstr("Pas possible d'utiliser la commande JUMP\n");
	      my_putstr("Ennemi a proximite\n");
	      break;
	    }
	  else if (!(*enemy_presence) && (my_strcmp(read, "attack") == 0))
	    {
	      my_putstr("Pas possible d'utiliser la commande ATTACK\n");
	      my_putstr("Pas d'ennemi a proximite\n");
	      break;
	    }
	  else if (my_strcmp(read, orders_command[i].orders) == 0)
	    {
	      valid_order = 0;
	      orders_command[i].func(ship, enemy_presence, enemy);
	      break;
	    }
	  i++;
	}
      if (orders_command[i].orders == NULL)
	my_putstr("[SYSTEM FAILURE] : commande inconnue\n");
    }
}
