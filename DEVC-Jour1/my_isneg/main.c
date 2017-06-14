/*
** main.c for  in /home/nicolas/horbac_n/my_isneg
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 18:25:45 2017 HORBACZ Nicolas
** Last update Mon Mar 20 18:38:48 2017 HORBACZ Nicolas
*/
#include <unistd.h>
#include <stdio.h>

int	my_isneg(int n);

int     main()
{
  printf("%d\n", my_isneg(-542));
  printf("%d\n", my_isneg(2284));
  return(0);
}
