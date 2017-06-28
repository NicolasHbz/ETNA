/*
** liblist.h for  in /home/nicolas/Documents/etna/LibList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Jun 20 16:04:28 2017 HORBACZ Nicolas
** Last update Tue Jun 27 23:35:36 2017 HORBACZ Nicolas
*/

#ifndef _LIBLIST_H__
#define _LIBLIST_H__

typedef struct	s_list
{
  int		index;
  char		*value;
  void		(*free_func)(void *);
  int		(*comp_func)(void *, void *);
  struct s_list *prev;
  struct s_list	*next;
}		t_list;

void		my_putstr(char *str);
void		my_put_nbr(int n);
t_list          *create_doubly_list(int index, char *value);
t_list          *add_element_at_head(t_list *list, int index, char *value);
t_list          *add_element_at_tail(t_list *list, int index, char *value);
int		get_list_length(t_list *list);
t_list		*delete_doubly_list(t_list *list);
t_list		*delete_element_from_doubly_list(t_list *list);
t_list          *search_int(t_list *list, int index);
t_list          *search_char(t_list *list, char *value);
t_list          *parse_args(int argc, char **argv, int args_required);
  
#endif
