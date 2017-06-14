/*
** my_put_nbr.c for  in /home/nicolas/horbac_n/my_put_nbr
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Fri Mar 24 09:23:08 2017 HORBACZ Nicolas
** Last update Fri Apr 21 18:03:51 2017 HORBACZ Nicolas
*/

void	my_putchar(char c);

void	min_len()
{
  char*min;

  min = "-2147483648";
  while (*min != '\0')
    {
      my_putchar(*min);
      min = min + 1;
    }
}

void	my_put_nbr(int n)
{
  int	div;
  int	res;

  div = 1;
  if (n == -2147483648)
    min_len();
  if (n < 0 && n != -2147483648)
    {
      n = n * -1;
      my_putchar('-');
    }
  while (n / div >= 10)
    div = div * 10;
  while (div != 0 && n != -2147483648)
    {
      res = (n / div) % 10;
      div = div / 10;
      my_putchar(res + '0');
    }
}
