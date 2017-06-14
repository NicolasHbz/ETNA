/*
** my_putstr.c for  in /home/nicolas/horbac_n/my_putstr
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 22 09:44:56 2017 HORBACZ Nicolas
** Last update Wed Mar 22 13:14:47 2017 HORBACZ Nicolas
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      ++str;
    }
}
