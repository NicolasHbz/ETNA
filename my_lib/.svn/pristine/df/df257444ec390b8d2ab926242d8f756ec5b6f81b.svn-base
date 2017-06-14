/*
** my_strdup.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Apr 10 12:00:15 2017 HORBACZ Nicolas
** Last update Mon Apr 10 13:08:01 2017 HORBACZ Nicolas
*/

#include <stdlib.h>

int	my_strlen(const char *str);

char	*my_strdup(const char *str)
{
  int	i;
  char	*copy;

  i = 0;
  copy = NULL;
  if ((copy = malloc((my_strlen(str) + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      copy[i] = str[i];
      i++;
    }
  copy[i] = '\0';
  return (copy);
}
