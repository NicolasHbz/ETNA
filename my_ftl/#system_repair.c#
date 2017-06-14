/*
** system_repair.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Apr 11 21:32:24 2017 HORBACZ Nicolas
** Last update Wed Apr 12 18:00:38 2017 HORBACZ Nicolas
*/

#include "ftl.h"
#include "function.h"
#include <stdlib.h>

static const t_repair_command	repair_command[] =
  {
    {"ftl_drive", ftl_drive_system_repair},
    {"navigation_tools", navigation_tools_system_repair},
    {"weapon", weapon_system_repair},
    {NULL, NULL}
  };

void                            system_repair(t_ship *ship)
{
  char				*read;
  int				i;

  i = 0;
  my_putstr("repair_system~> ");
  read = readLine();
  if (read == NULL)
    {
      my_putstr("[SYSTEM FAILURE] : le lecteur de commande est bloque");
      return;
    }
  my_putchar('\n');
  while (repair_command[i].repair != NULL)
    {
      if (my_strcmp(read, repair_command[i].repair) == 0)
	{
	  repair_command[i].ptrfunc(ship);
	  break;
	}
      i++;
    }
  if (repair_command[i].repair == NULL)
    my_putstr("[SYSTEM FAILURE] : commande inconnue\n");
}

void				ftl_drive_system_repair(t_ship *ship)
{
  my_putstr("reparation du reacteur en cours...\n");
  free(ship->ftl_drive->system_state);
  ship->ftl_drive->system_state = my_strdup("online");
  if (ship->ftl_drive->system_state == NULL)
      my_putstr("les reparations du reacteur ont echoue\n\n");
  else
    my_putstr("reparation terminee! systeme reacteur OK!\n\n");
}

void				navigation_tools_system_repair(t_ship *ship)
{
  my_putstr("reparation du systeme de navigation en cours...\n");
  free(ship->navigation_tools->system_state);
  ship->navigation_tools->system_state = my_strdup("online");
  if (ship->navigation_tools->system_state == NULL)
    my_putstr("les reparations des outils de navigations ont echoue\n\n");
  else
    my_putstr("reparation terminee! systeme de navigation OK!\n\n");
}

void				weapon_system_repair(t_ship *ship)
{
  my_putstr("reparation du systeme d'armement en cours...\n");
  free(ship->weapon->system_state);
  ship->weapon->system_state = my_strdup("online");
  if (ship->weapon->system_state == NULL)
    my_putstr("les reparations du systeme d'armement ont echoue\n\n");
  else
    my_putstr("reparation terminee! systeme d'armement OK!\n\n");
}
