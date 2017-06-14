/*
** my_get_nbr.c for  in /home/nicolas/DEVC-Jour5/my_getnbr
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Mar 25 10:53:40 2017 HORBACZ Nicolas
** Last update Sat Mar 25 11:01:34 2017 HORBACZ Nicolas
*/

int	my_strlen(char *str);

int     my_get_nbr(char *nbr)
{
  int   n;
  int   i;
  int   resultat;

  n = 1;
  resultat = 0;
  i = my_strlen(nbr) - 1;
  while(i >= 0)
    {
      resultat = resultat + (n * (nbr[i] - 48));
      n = n * 10;
      i--;
    }
  return (resultat);
}
