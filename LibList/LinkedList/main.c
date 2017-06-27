/*
** main.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Jun 20 16:58:53 2017 HORBACZ Nicolas
** Last update Tue Jun 27 20:50:11 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>


int		main()
{
  t_list	*liste;
  t_list	*tmp;
  char		*chaine = "si";
  char		*chaine2 = "da";
  char		*chaine3 = "oh";
  int		i = 0;

  liste = create_list(0, chaine);
  
  // Ajouter element
  liste = add_element(liste, 1, chaine);
  liste = add_element(liste, 2, chaine2);
  liste = add_element(liste, 3, chaine3);

  //supprimer element
  liste = delete_element(liste);

  //supprimer la liste
  liste = delete_list(liste);

  //chercher un char dans la liste
  liste = search_char(liste, chaine);


  // afficher liste
  tmp = liste;

  while (tmp != NULL)
    {
      my_putstr("\nIndex numero: ");
      my_put_nbr(tmp->index);
      my_putchar('\n');
      my_putstr("contient la valeur: ");
      my_putstr(tmp->value);
      my_putstr("\n\n");
      tmp = tmp->next;
    }
  
  return 0;
}
