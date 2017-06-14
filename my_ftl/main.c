/*
** main.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Apr 10 10:54:51 2017 HORBACZ Nicolas
** Last update Sat Apr 15 10:04:52 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include "ftl.h"
#include "function.h"
#include <stdlib.h>

int		main()
{
  t_ship	*ship;
  t_enemy	*enemy;
  int		enemy_presence;

  enemy_presence = 0;
  enemy = NULL;
  start();
  ship = create_ship();
  add_weapon_to_ship(ship);
  add_ftl_drive_to_ship(ship);
  add_navigation_tools_to_ship(ship);
  orders(ship, &enemy_presence, enemy);

  return (0);
}
