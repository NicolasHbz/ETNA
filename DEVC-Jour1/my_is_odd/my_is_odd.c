/*
** my_is_odd.c for  in /home/nicolas/horbac_n/my_is_odd
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 16:56:41 2017 HORBACZ Nicolas
** Last update Mon Mar 20 17:01:44 2017 HORBACZ Nicolas
*/

int  my_is_odd(int n)
{
  if (n % 2 == 0)
    {
      n = 0;
    }
  else
    {
      n = 1;
    }
  return n;
}
