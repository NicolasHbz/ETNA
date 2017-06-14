int	my_getnbr(char *str)
{
  int	res;
  int	s;

  res = 0;
  s = 1;
  while (*str == '-' || *str == '+')
    {
      if (*str == '-')
	s = -s;
      str++;
    }
  while (*str != '\0' && (*str >= '0' && *str <= '9'))
    {
      if (res >= 2147483647)
	return (0);
      if (res == 2147483647 && s == 1)
	return (0);
      if (res == 2147483647 && s == -1)
	return (0);
      res = res * 10 + (*str - 48);
      str++;
    }
  if (s == -1)
    res = -res;
  return (res);
}
