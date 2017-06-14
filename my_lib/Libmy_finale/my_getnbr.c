/*
** my_getnbr.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Apr 15 09:31:45 2017 HORBACZ Nicolas
** Last update Sat Apr 15 09:31:48 2017 HORBACZ Nicolas
*/

int	my_getnbr(char *str)
{
  int	res;
  int	s;

  res = 0;
  s = 1;
  while (*str == '-' || *str == '+')
    {
      if (*str == '-')
	s = -s;
      str++;
    }
  while (*str != '\0' && (*str >= '0' && *str <= '9'))
    {
      if (res >= 2147483647)
	return (0);
      if (res == 2147483647 && s == 1)
	return (0);
      if (res == 2147483647 && s == -1)
	return (0);
      res = res * 10 + (*str - 48);
      str++;
    }
  if (s == -1)
    res = -res;
  return (res);
}
