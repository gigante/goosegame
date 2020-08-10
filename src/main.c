/*
    <================================= GOOSE GAME =================================>

          Program Developed for Academics Purposes
          Github Page: http://daileon.github.com/goosegame
          Developer: Hiarison Gigante <gigante@daileon.net>
          Undergraduate Computer Science - UFMA
          São Luis, MA - December/2011          

    <==============================================================================>
*/

// This file controls the State Machine of Goose Game

#include <stdio.h> //the standard C Library
#include <stdlib.h> //the standard C Library
#include "libmenu.h" //all menus of the game
#include "gamecore.h" //controls the game rules
#include "utils.h" //methods that can be used anywhere
int main()
{
  int menuStatus;
  do {
    menuStatus = menuInicial();
    if(menuStatus == 1){ //Start Game
      initGame();
    } else if(menuStatus == 2){ //Show Game Rules
      menuRegras();
    } else if(menuStatus == 3){ //Show Credits
      menuCreditos();
    }
  } while(menuStatus>=1 && menuStatus <=3);
  printf("Bye!");
  return 0;
}