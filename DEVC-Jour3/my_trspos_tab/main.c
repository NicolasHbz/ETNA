/*
** main.c for  in /home/nicolas/horbac_n/my_trspos_tab
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 22 14:43:53 2017 HORBACZ Nicolas
** Last update Wed Mar 22 14:44:19 2017 HORBACZ Nicolas
*/

void my_trspos_tab(int c, int l, int tab[l][c]);

int main()
{
  int tab[3][4] = {{0, 0, 0, 0},
		   {1, 1, 1, 1},
		   {2, 2, 2, 2}};

  my_trspos_tab(4, 3, tab);
  return (0);
}
