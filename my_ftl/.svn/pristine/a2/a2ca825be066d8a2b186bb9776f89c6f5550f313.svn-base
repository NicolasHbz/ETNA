/*
** system_control.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Apr 11 19:01:44 2017 HORBACZ Nicolas
** Last update Tue Apr 11 21:19:33 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include "ftl.h"
#include "function.h"
#include <stdlib.h>

void		ftl_drive_system_check(t_ship *ship)
{
  my_putstr("verification du reacteur en cours...\n");
  if (my_strcmp(ship->ftl_drive->system_state, "online") == 0)
    my_putstr("reacteur OK!\n");
  else
    my_putstr("reacteur hors service!\n");
}

void		navigation_tools_system_check(t_ship *ship)
{
  my_putstr("verification du systeme de navigation en cours...\n");
  if (my_strcmp(ship->navigation_tools->system_state, "online") == 0)
    my_putstr("systeme de navigation OK!\n");
  else
    my_putstr("systeme de navigation hors service!\n");
}

void		weapon_system_check(t_ship *ship)
{
  my_putstr("verification du systeme d'armement en cours...\n");
  if (my_strcmp(ship->weapon->system_state, "online") == 0)
    my_putstr("systeme d'armement OK!\n");
  else
    my_putstr("systeme d'armement hors service!\n");
}

void		system_control(t_ship *ship)
{
  ftl_drive_system_check(ship);
  navigation_tools_system_check(ship);
  weapon_system_check(ship);
}
