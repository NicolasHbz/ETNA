/*
** my_strcmp.c for  in /home/nicolas/horbac_n/my_strcmp
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 13:53:07 2017 HORBACZ Nicolas
** Last update Thu Mar 23 16:34:43 2017 HORBACZ Nicolas
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((s1[i] || s2[i]) && i < n)
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i] > s2[i])
	return (1);
      i++;
    }
  if ((s1[i] < s2[i]) && i < n)
    return (-1);
  if ((s1[i] > s2[i]) && i < n)
    return (0);
  return (0);
}
