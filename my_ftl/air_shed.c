/*
** create_ship.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Apr 10 10:29:33 2017 HORBACZ Nicolas
** Last update Sat Apr 15 10:05:51 2017 HORBACZ Nicolas
*/

#include <stdlib.h>
#include "ftl.h"
#include "function.h"

t_ship			*create_ship()
{
  t_ship		*create;
  t_weapon		*weapon;
  t_ftl_drive		*ftl_drive;
  t_navigation_tools	*navigation_tools;
  t_container		*container;

  create = NULL;
  weapon = NULL;
  ftl_drive = NULL;
  navigation_tools = NULL;
  container = NULL;
  my_putstr("construction du vaisseau en cours...\n");
  create = malloc(sizeof(*create));
  if (create == NULL)
    {
      my_putstr("le vaisseau n'a pas pu etre construit ");
      my_putstr("par manque de materiaux\n\n");
    }
  my_putstr("amelioration du vaisseau termine!\n\n");
  create->hull = 50;
  return create;
}

int			add_weapon_to_ship(t_ship *ship)
{
  t_weapon		*weapon;

  my_putstr("ajout des armes en cours...\n");
  weapon = malloc(sizeof(*weapon));
  if (weapon == NULL)
    {
      my_putstr("votre vaisseau a explose quand vous avez ");
      my_putstr("tente d'ajouter les armes\n\n");
      return (0);
    }
  weapon->damage = 10;
  weapon->system_state = my_strdup("online");
  ship->weapon = weapon;
  my_putstr("les armes on ete ajoutes avec succes!\n\n");
  return (1);
}

int			add_ftl_drive_to_ship(t_ship *ship)
{
  t_ftl_drive		*ftl_drive;

  my_putstr("ajout du reacteur en cours...\n");
  ftl_drive = malloc(sizeof(*ftl_drive));
  if (ftl_drive == NULL)
    {
      my_putstr("votre vaisseau a explose lorsque vous ");
      my_putstr("avez pose le reacteur\n\n");
      return (0);
    }
  ftl_drive->energy = 10;
  ftl_drive->system_state = my_strdup("online");
  ship->ftl_drive = ftl_drive;
  my_putstr("le reacteur a ete ajoute avec succes!\n\n");
  return (1);
}

int			add_navigation_tools_to_ship(t_ship *ship)
{
  t_navigation_tools	*navigation_tools;

  my_putstr("ajout des outils de navigations...\n");
  navigation_tools = malloc(sizeof(*navigation_tools));
  if (navigation_tools == NULL)
    {
      my_putstr("votre vaisseau a explose lorsque vous avez ");
      my_putstr("pose les outils de navigations\n\n");
      return (0);
    }
  navigation_tools->sector = 0;
  navigation_tools->evade = 25;
  navigation_tools->system_state = my_strdup("online");
  ship->navigation_tools = navigation_tools;
  my_putstr("les outils de navigations ont ete ajoutes avec succes!\n\n");
  return (1);
}
