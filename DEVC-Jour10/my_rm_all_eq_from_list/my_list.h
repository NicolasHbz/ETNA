/*
** struct.h for  in /home/nicolas/horbac_n/my_find_elm_eq_in_list
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 30 10:03:44 2017 HORBACZ Nicolas
** Last update Thu Mar 30 13:43:21 2017 HORBACZ Nicolas
*/
#ifndef	__MY_LIST_H__
#define __MY_LIST_H__

typedef struct		s_list
{
  void			*data;
  struct s_list		*next;
}			t_list;

#endif
