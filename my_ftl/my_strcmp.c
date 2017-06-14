/*
** my_strcmp.c for  in /home/nicolas/horbac_n/my_strcmp
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 13:53:07 2017 HORBACZ Nicolas
** Last update Tue Apr 11 18:20:26 2017 HORBACZ Nicolas
*/

#include <stdlib.h>

int	my_strcmp(const char *s1, const char *s2)
{
  int	i;

  if (s1 == NULL || s2 == NULL)
    return (-2);
  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s1[i] < s2[i])
	return (-1);
      i++;
    }
  if (s2[i] != '\0')
    return (-1);
  return (0);
}
