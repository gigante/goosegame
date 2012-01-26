#ifndef LIBMENU_H_INCLUDED
#define LIBMENU_H_INCLUDED

/*
  This header file contains all the menus of game
*/

#include <stdio.h> //the standard C Library
#include <stdlib.h> //the standard C Library
#include "utils.h" //methods that can be used anywhere

/*
  Show the main manu
*/
int menuInicial(){
  int resposta;
  do {
    limpaTela();
    printf("\n");
    printf("<================================= GOOSE GAME =================================>\n");
    printf("\n");
    printf("                                   (1) START                                    \n");
    printf("                                   (2) RULES                                    \n");
    printf("                                   (3) CREDITS                                  \n");
    printf("                                   (4) EXIT                                     \n");
    printf("\n");
    printf("                                   OPTION: ");
    scanf("%d", &resposta);
  } while (resposta!=1 && resposta!=2 && resposta!=3 && resposta!=4);
  return resposta;
}

/*
  Show credits menu
*/
void menuCreditos(){
  char resposta;
  do{
    limpaTela();
    printf("\n");
    printf("<================================= GOOSE GAME =================================>\n");
    printf("                                                                                \n");
    printf("        Program Developed for Academics Purposes                                \n");
    printf("        Github Page: http://daileon.github.com/goosegame                        \n");
    printf("        Developer: Hiarison Gigante <gigante@daileon.net>                       \n");
    printf("        Undergraduate Computer Science - UFMA                                   \n");
    printf("        São Luis, MA - December/2011                                            \n");
    printf("                                                                                \n");
    printf("<==============================================================================>\n");
    
    printf("\n");
    printf("Return to the main menu? (y/n): ");
    scanf("%s", &resposta);
  } while(resposta!='s');
}

/*
  This menu receives the name of the players
*/
Jogador menuJogador(int item){
  struct Jogador jogador;
  limpaTela();
  printf("\n");
  printf("<================================= GOOSE GAME =================================>\n\n");
  printf("        Who are the players of the time?\n\n");
  printf("        Player %d: ", item);
  scanf("%s", jogador.nome);
  return jogador;
}

/*
  This menu show the basic game rules
*/
void menuRegras(){
  char resposta;
  do{
    limpaTela();
    printf("\n");
    printf("<================================= GOOSE GAME =================================>\n");
    printf("\n");
    printf("        Goose Game was inspired in Game of The Goose, board game.               \n");
    printf("        Consists in a track with consecutively                                  \n");
    printf("        numbered spaces (depending of selected map).                            \n");
    printf("        Players covers spaces rolling dices.                                    \n");
    printf("        The objective is to walk in the way until the end.                      \n");
    printf("\n");
    printf("<==============================================================================>\n");
    printf("\n");
    printf("Return to the main menu? (y/n): ");
    scanf("%s", &resposta);
  } while(resposta!='s');
}

/*
  This menu allows the players choose the map wich will be run
*/
int menuEscolherMapa(){
  int resposta;
  do{
    limpaTela();
    printf("\n");
    printf("<================================= GOOSE GAME =================================>\n\n");
    printf("        Choose the map\n");
    printf("        (1) Map 1: looks like the number '2' \n");
    printf("        (2) Map 2: looks like the letter 'W'  \n");
    printf("\n");
    printf("        Opcao: ");
    scanf("%d", &resposta);
  }while(resposta!=1 && resposta!=2);
  return resposta;
}

/*
  Menu show "continue"
*/
void menuContinuar(){
  char resposta;
  do {
    printf("        Continue? (y/n): ");
    scanf("%s", &resposta);
  } while(resposta!='s');
}

/*
  Menu show menu to roll dice
*/
void menuDados(){
  char resposta;
  do {
    printf("        You want roll dice?? (y/n): ");
    scanf("%s", &resposta);
  } while(resposta!='s');
}

#endif // LIBMENU_H_INCLUDED
