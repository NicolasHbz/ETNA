/*
** structure.h for  in /home/nicolas/horbac_n/my_params_to_tab
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Mar 28 17:27:17 2017 HORBACZ Nicolas
** Last update Tue Mar 28 17:27:29 2017 HORBACZ Nicolas
*/

struct                  s_stock_par
{
  int   size_param;     /* longueur du paramètre */
  char  *str;           /* adresse du paramètre  */
  char  *copy;          /* copie du paramètre    */
  char  **tab;          /* renvoyé par my_str_to_wordtab  */
};

