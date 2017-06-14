/*
** main.c for  in /home/nicolas/horbac_n/my_put_revstr
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 22 13:24:54 2017 HORBACZ Nicolas
** Last update Wed Mar 22 13:26:09 2017 HORBACZ Nicolas
*/

#include <string.h>

void  my_put_revstr(char *str);

int main()
{
  char *str = strdup("ABCD");
  my_put_revstr(str);
  return (0);
}
