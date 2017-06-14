/*
** main.c for  in /home/nicolas/horbac_n/my_swap
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 22 12:33:56 2017 HORBACZ Nicolas
** Last update Wed Mar 22 12:35:21 2017 HORBACZ Nicolas
*/

#include <stdio.h>
void my_swap(int *a, int *b);

int main()
{
  int a = 42;
  int b = 21;

  printf("%d %d\n", a, b);
  my_swap(&a, &b);
  printf("%d %d\n", a, b);
  return (0);
}
