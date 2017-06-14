/*
** my_strcat.c for  in /home/nicolas/horbac_n/my_strcat
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 16:48:06 2017 HORBACZ Nicolas
** Last update Sat Apr 15 09:29:59 2017 HORBACZ Nicolas
*/

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      ++i;
    }
  while (j < n)
    {
      dest[i] = src[j];
      ++j;
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}
