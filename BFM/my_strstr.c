/*
** my_strstr.c for  in /home/nicolas/libmy_01
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Mar 25 23:44:50 2017 HORBACZ Nicolas
** Last update Fri Apr 21 18:05:36 2017 HORBACZ Nicolas
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  if (str[0] != '\0')
    {
      i = 0;
      while (to_find[i] != '\0')
	{
	  if (to_find[i] != str[i])
	    return (my_strstr(str + 1, to_find));
	  i = i + 1;
	}
      return (str);
    }
  else
    return(0);
}
