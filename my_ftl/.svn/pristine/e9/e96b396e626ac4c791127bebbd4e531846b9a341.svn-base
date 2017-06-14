/*
** my_str_to_wordtab.c for  in /home/nicolas/horbac_n/my_str_to_wordtab
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 27 14:01:14 2017 HORBACZ Nicolas
** Last update Tue Mar 28 15:08:04 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <stdlib.h>

char **my_str_to_wordtab(char *str)
{
  int i;
  int j;
  int k;
  char **tab;

  i = 0;
  j = 0;
  k = 0;
  tab = malloc(sizeof(str) * 100 + 1);
  while(str[j])
    {
      tab[i] = malloc(sizeof(str) * 100 + 1);
      while((str[j] != '\0') && ((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z') || (str[j] >= '0' && str[j] <= '9')))
	{
	  tab[i][k] = str[j];
	  j++;
	  k++;
	}
      while((str[j] != '\0') && !((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z') || (str[j] >= '0' && str[j] <= '9')))
	{
	  j++;
	}
      tab[i][k] = '\0';
      i++;
      k++;
      k = 0;
    }
  tab[i] = NULL;
  return(tab);
  free(tab);
}
