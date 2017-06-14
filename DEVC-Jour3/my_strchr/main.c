/*
** main.c for  in /home/nicolas/horbac_n/my_strchr
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 22 11:00:38 2017 HORBACZ Nicolas
** Last update Wed Mar 22 11:01:21 2017 HORBACZ Nicolas
*/

char* my_strchr(char *str, int c);
void my_putstr(char *str);
void my_putchar(char c);

int main()
{
  my_putstr(my_strchr("Hello World", 'o'));
  my_putchar('\n');
  my_putstr(my_strchr("plop", 'z'));
  my_putchar('\n');
  return (0);
}
