/*
** my_isneg.c for  in /home/nicolas/horbac_n/my_isneg
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 18:31:28 2017 HORBACZ Nicolas
** Last update Mon Mar 20 18:35:23 2017 HORBACZ Nicolas
*/
int    my_isneg(int n)
{
  if (n < 0)
    {
      n = 0;
    }
  else
    {
      n = 1;
    }
  return n;
}
