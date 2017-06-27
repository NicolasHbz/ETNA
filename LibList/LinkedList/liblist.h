/*
** liblist.h for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Jun 20 16:04:28 2017 HORBACZ Nicolas
** Last update Tue Jun 27 20:47:29 2017 HORBACZ Nicolas
*/

#ifndef _LIBLIST_H__
#define _LIBLIST_H__

typedef struct	s_list
{
  int		index;
  char		*value;
  void		(*free_func)(void *);
  int		(*comp_func)(void *, void *);
  struct s_list	*next;
}		t_list;

void		my_putstr(char *str);
void		my_put_nbr(int n);
t_list          *create_list(int index, char *value);
t_list          *add_element(t_list *list, int index, char *value);
t_list		*delete_list(t_list *list);
t_list          *delete_element(t_list *list);
t_list          *search_int(t_list *list, int index);
t_list          *search_char(t_list *list, char *value);
  
#endif
