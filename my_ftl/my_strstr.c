/*
** my_strstr.c for  in /home/nicolas/libmy_01
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Sat Mar 25 23:44:50 2017 HORBACZ Nicolas
** Last update Sat Mar 25 23:45:24 2017 HORBACZ Nicolas
*/

char*my_strstr( char *str, char *to_find)
{
  int i;
  int j;
  int k;

  i = 0;
  j = 0;
  k = 0;
  if (str[i] != '\0' && to_find[j] != '\0')
    {
      if (to_find[j] == str[i])
	{
	  if (k == 0)
	    k = 1;
	  i++;
	  j++;
	}
      else if (k != 0)
	return ("null");
      else
	i++;
    }
  if (k == 0)
    return ("null");
  str[j + k] = '\0';
  return (&str[k]);
}
