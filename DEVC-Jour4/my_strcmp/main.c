/*
** main.c for  in /home/nicolas/horbac_n/my_strcmp
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 13:58:20 2017 HORBACZ Nicolas
** Last update Thu Mar 23 16:40:38 2017 HORBACZ Nicolas
*/
#include <stdio.h>

int my_strcmp(char *s1, char *s2);

int main()
{
  char chaine1[] = "chaine de test";
  char chaine2[] = "chaine de zest";
  int  test;
  
  test = my_strcmp(chaine1, chaine2);

  printf("%d", test);

  return (0);
}

  
