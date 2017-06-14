/*
** main.c for  in /home/nicolas/horbac_n/roulette
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Mar 25 09:09:28 2017 HORBACZ Nicolas
** Last update Sat Mar 25 13:18:24 2017 HORBACZ Nicolas
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	my_putstr(char *str);
char	*my_strcpy(char *dest, char *src);
char	*readLine();
void	my_putchar(char c);
void	my_put_nbr(int n);
int	my_get_nbr(char *str );
int	pair(int mise);
int	argent_gagne(int mise);

int	main()
{
  char	mise[50];
  char	num_choisi[50];
  char  continuer_char[50];
  int	mise_int;
  int	num_choisi_int;
  int	random;
  int	gains;
  int	total_gains;
  int	continuer;

  total_gains = 0;
  continuer = 1;
  while (continuer)
    {
      gains = 0;
      num_choisi_int = 0;
      my_putstr("\n\nBienvenue dans le jeu de la roulette !!!\n");
      my_putstr("Veuillez choisir un montant à miser:\n");
      my_strcpy(mise, readLine());
      mise_int = my_get_nbr(mise);
      my_putstr(mise);
      my_putstr("\n");      
      while (num_choisi_int < 1  || num_choisi_int > 36)
	{
	  my_putstr("Veuillez choisir le numero sur lequel vous souhaitez miser (entre 1 et 36):\n");
	  my_strcpy(num_choisi, readLine()); 
	  num_choisi_int = my_get_nbr(num_choisi);
	  my_putstr(num_choisi);
	}
      my_putstr("\n");
      my_putstr("La roulette se lance ... \n \n");
      srand (time (NULL));
      random = (rand()% 36) + 1;
      my_putstr("Le numero gagnant est le numero: ");
      my_put_nbr(random);
      my_putstr("\n");
      if (mise_int == random)
	{
	  my_putstr("Bravo, vous avez gagné: ");
	  gains = argent_gagne(mise_int);
	  my_put_nbr(gains);
	  my_putstr("\n");
	}
      else if ((pair(mise_int) && pair(random)) || (!pair(mise_int) && !pair(random)))
	{
	  gains = mise_int / 2;
	  my_putstr("Vous avez gagne :");
	  my_put_nbr(gains);
	  my_putstr(" Eur");
	  my_putstr("\n");
	}
      else
	{
	  my_putstr("Desole vous avez perdu \n");
        }
      total_gains = total_gains + gains;
      my_putstr("Gains du jour :");
      my_put_nbr(total_gains);
      my_putstr("Voulez vous refaire une partie ? (0 = non / 1 = oui)\n");
      my_strcpy(continuer_char, readLine());
      continuer = my_get_nbr(continuer_char);
    }  	   
  return 0;
}
