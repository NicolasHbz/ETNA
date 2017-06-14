/*
** display_score.c for  in /home/nicolas/horbac_n/chifumi
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Apr  1 09:51:51 2017 HORBACZ Nicolas
** Last update Sat Apr  1 11:26:39 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int		display_score (int round_winner, score_d *score)
{
  int		total_score;

  if (round_winner == 1)
    score->player = score->player + 1;
  if (round_winner == 2)
    score->cpu = score->cpu + 1;
  my_putstr("SCORE:   ");
  my_putstr("Joueur : ");
  my_put_nbr(score->player);
  my_putstr("         Ordinateur: ");
  my_put_nbr(score->cpu);
  my_putstr("\n------------------------------");
  total_score = score->player + score->cpu;
  my_putstr("\n\n");
  return (total_score);
}
      
      

  
