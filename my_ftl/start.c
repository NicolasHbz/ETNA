/*
** start.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Apr 13 11:25:48 2017 HORBACZ Nicolas
** Last update Thu Apr 13 16:24:15 2017 HORBACZ Nicolas
*/

#include <stdlib.h>
#include "ftl.h"
#include "function.h"

void		start()
{
  my_putstr("\n---------------------\n");
  my_putstr("BIENVENUE DANS MY_FTL\n");
  my_putstr("---------------------\n");
  draw_ship();
}

void		draw_ship()
{
  my_putchar('\n');
  my_putstr("    .    ,,o         .                  __.o+.       \n");
  my_putstr("       od8^                  .      oo888888P^b      \n");
  my_putstr("     ,\"'.o'      .     .             `b^'""`b -`b   . \n");
  my_putstr("   ,'.'o'             .   .          t. = -`b -`t.   \n");
  my_putstr("  ; d o' .        ___          _.--.. 8  -  `b  =`b  \n");
  my_putstr(" dooo8<       .o:':__;o.     ,;;o88%%8bb - = `b  =`b.\n");
  my_putstr("|^88^88=. .,x88/::/ | \\`;;;;;;d%%%%%88%88888/%x888888\n");
  my_putstr(":-88=88%%L8`%`|::|_>-<_||%;;%;8%%=;:::=%8;;\%%%%|88888\n");
  my_putstr("|=88 88%%|HHHH|::| >-< |||;%;;8%%=;:::=%8;;;%%%%+|]88\n");
  my_putstr("| 88-88%%LL.%.%b::Y_|_Y/%|;;;;`%8%%oo88%:o%.;;;;+|]88\n");
  my_putstr("Yx88o88^^'\"'`^^%8boooood..- |H_Hd%P%%88%P^%%^'|;;;/%%\n");
  my_putstr(" `'|^|          ~''''''      d%P '''^' ;   = `+' - P \n");
  my_putstr("  `.`.b   .                :<%%>  .   :  -   d' - P  \n");
  my_putstr("    .`.b     .        .    `788      ,'-  = d' =.'   \n");
  my_putstr("     ``.b.                           :..-  :'  P     \n");
  my_putstr("  .   `q.>b         .               `^^^:::::,'      \n");
  my_putstr("        ""^^               .                   \n\n");
}
