/*
** main.c for  in /home/nicolas/horbac_n/my_putstr
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 22 09:41:59 2017 HORBACZ Nicolas
** Last update Wed Mar 22 09:42:28 2017 HORBACZ Nicolas
*/

void my_putstr(char *str);
void my_putchar(char c);

int   main()
{
  char  *str;
  str = "bOnjour ;";
  my_putstr(str);
  my_putchar('\n');
  return (0);
}
