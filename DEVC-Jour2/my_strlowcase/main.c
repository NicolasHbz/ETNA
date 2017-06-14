/*
** main.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Mar 21 15:26:27 2017 HORBACZ Nicolas
** Last update Tue Mar 21 17:27:22 2017 HORBACZ Nicolas
*/
char   *my_strlowcase(char str[]);
void	my_aff_tab(char str[]);
void	my_putchar(char c);

int    main()
{
  char  str[11]={'B','O', 'N', 'J', 'O', 'U', 'R',' ','P', 'D','\0'};
  my_aff_tab(my_strlowcase(str));
  my_putchar('\n');
  return (0);
}
