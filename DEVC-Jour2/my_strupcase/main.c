/*
** main.c for  in /home/nicolas/horbac_n/my_strupcase
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Mar 21 14:55:35 2017 HORBACZ Nicolas
** Last update Tue Mar 21 16:39:31 2017 HORBACZ Nicolas
*/
char   *my_strupcase(char str[]);
void	my_aff_tab(char str[]);
void	my_putchar(char c);

int	main()
{
  char  str[11]={'b','o', 'n', 'j', 'o', 'u', 'r',' ','c','e','\0'};
  my_aff_tab(my_strupcase(str));
  my_putchar('\n');
  return (0);
}
