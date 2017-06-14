/*
** my_strncpy.c for  in /home/nicolas/horbac_n/my_strncpy
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 13:05:30 2017 HORBACZ Nicolas
** Last update Fri Apr 21 18:00:29 2017 HORBACZ Nicolas
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  while (i < n)
    {
      dest[i] = '\0';
      i = i + 1;
    }
  return (dest);
}
