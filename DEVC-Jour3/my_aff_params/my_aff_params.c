/*
** my_aff_params.c for  in /home/nicolas/horbac_n/my_aff_params
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 22 16:48:11 2017 HORBACZ Nicolas
** Last update Wed Mar 22 17:48:35 2017 HORBACZ Nicolas
*/

void	my_putchar(char c);

void	my_aff_params(int argc, char **argv)
{
  int	i;
  int	j;

  i = 0;
  while (i <= argc)
    {
      j = 0;
      while (argv[i][j] != '\0')
	{
	  my_putchar(argv[i][j]);
	  ++j;
	}
      my_putchar('\n');
      ++i;
    }
}
