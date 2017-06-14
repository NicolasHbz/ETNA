/*
** my_is_seven.c for  in /home/nicolas/horbac_n/my_is_seven
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 16:09:06 2017 HORBACZ Nicolas
** Last update Mon Mar 20 16:17:54 2017 HORBACZ Nicolas
*/
#include <unistd.h>

int  my_is_even(int n)
{
  if (n % 2 == 0)
    {
      n = 1;
    }
  else
    {
      n = 0;
    }
  return n;
}
