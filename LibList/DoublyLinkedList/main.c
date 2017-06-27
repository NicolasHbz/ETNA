/*
** main.c for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Jun 20 16:58:53 2017 HORBACZ Nicolas
** Last update Tue Jun 27 21:06:18 2017 HORBACZ Nicolas
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
  int		nb_element;

  liste = create_doubly_list(1, chaine);
  
  //Ajouter element
  liste = add_element_at_tail(liste, 2, chaine2); 
  liste = add_element_at_tail(liste, 3, chaine3);
  liste = add_element_at_tail(liste, 2, chaine2);

  // Supprimer element en milieu de liste
  liste = liste->next;
  liste = delete_element_from_doubly_list(liste);

  //compter elements dans la liste
  nb_element = get_list_length(liste);
  my_putstr("\nLongueur de liste = ");
  my_put_nbr(nb_element);
  my_putchar('\n');

  // Supprimer liste
  liste = delete_doubly_list(liste);

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
