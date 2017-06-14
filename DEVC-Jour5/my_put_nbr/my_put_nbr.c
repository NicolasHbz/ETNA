/*
** my_put_nbr.c for  in /home/nicolas/horbac_n/my_put_nbr
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Fri Mar 24 09:23:08 2017 HORBACZ Nicolas
** Last update Fri Mar 24 16:51:30 2017 HORBACZ Nicolas
*/

void	my_putchar(char c);

int	my_pow(int a, int b)
{
  int	i;
  int	puissance;

  puissance = 1;
  i = 1;
  while (i < b)
    {
      puissance = puissance * a;
      ++i;
    }
  return puissance;  
}

int	my_nbr_len(int n)
{
  int	i;
  i =	1;

  if (n > 0)
    {
      while (n >= 10)
	{
	  n = n / 10;
	  i = i + 1;
	}
    }
  else
    {
      while (n <= -10)
	{
	  n = n / 10;
	  i = i + 1;
	}
    }
  return i;
}

void	my_put_nbr(int n)
{
  int	i;

  i = my_nbr_len(n);

  if (n < 0)
    {
      n = n *(-1);
      my_putchar('-');
    }
  
  while ((i - 1) > 0)
    {
      my_putchar((n / my_pow(10, i) % 10) + 48);
      --i;
    }
    my_putchar((n % 10) + 48);
}
