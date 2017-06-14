/*
** my_sort_int_tab.c for  in /home/nicolas/horbac_n/my_sort_int_tab
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 09:40:35 2017 HORBACZ Nicolas
** Last update Thu Mar 23 18:13:05 2017 HORBACZ Nicolas
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	tmp;

  i = 0;
  while (i < (size - 1))
    {
      if (tab[i] > tab[i + 1])
        {
	  tmp = tab[i];
	  tab[i] = tab[i + 1];
	  tab[i + 1] = tmp;
	  i = i - 1;
	}
      ++i;
    }
}
