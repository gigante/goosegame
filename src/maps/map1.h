#ifndef MAP1_H_INCLUDED
#define MAP1_H_INCLUDED

/*
  This Header File is responsible for drawing a map on the screen
  Receives as parameter a struct 'Player' to show the position and names of players
  Struct 'Player' is located in header ../utils.h
*/

#include <stdio.h> //the standard C Library
#include <stdlib.h> //the standard C Library
#include "../utils.h" //methods that can be used anywhere

/*
This method draw the position and name of the players in the map
If the current player have finished the entire map, is return 0 (for false) and 1 (for true)
*/
int drawMap1(Jogador jogador1, Jogador jogador2){
  int i; //counter
  char x[TAMANHO_MAPA_1+1]; //vector track

  limpaTela();

  //the vector is decremented because starts at position "0"
  --jogador1.posicao;
  --jogador2.posicao;

  //clear all maps spaces in the track
  for(i=0; i<=TAMANHO_MAPA_1; i++){
    x[i] = ' ';
  }

  //decides where player will be drawed?
  if(jogador1.posicao==jogador2.posicao){
    x[jogador1.posicao] = '@';
  } else if(jogador1.posicao!=jogador2.posicao){
    if(jogador1.posicao>=0) {
      x[jogador1.posicao] = 'X';
    }
    if(jogador2.posicao>=0) {
      x[jogador2.posicao] = 'Y';
    }
  }

  printf("\n");
  printf("<================================= GOOSE GAME =================================>\n");
  printf("  Label: X = %s | Y = %s | @ = Same Position\n", jogador1.nome, jogador2.nome);
  printf("\n");
  printf("    -------------------------------------------------------------------------\n");
  printf("       %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", x[0],  x[1],  x[2],  x[3],  x[4],  x[5],  x[6],  x[7],  x[8],  x[9], x[10],  x[11]);
  printf("    -------------------------------------------------------------------------\n");
  printf("                                                                      |  %c  |\n",                                                                                         x[12]);
  printf("                                                                      -------\n");
  printf("                                                                      |  %c  |\n",                                                                                         x[13]);
  printf("    -------------------------------------------------------------------------\n");
  printf("    |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", x[25], x[24], x[23], x[22], x[21], x[20], x[19], x[18], x[17], x[16], x[15], x[14]);
  printf("    -------------------------------------------------------------------------\n");
  printf("    |  %c  |\n",                                                                              x[26]);
  printf("    -------\n");
  printf("    |  %c  |\n",                                                                              x[27]);
  printf("    -------------------------------------------------------------------------\n");
  printf("    |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c   \n", x[28], x[29], x[30], x[31], x[32], x[33], x[34], x[35], x[36], x[37], x[38], x[39]);
  printf("    -------------------------------------------------------------------------\n");
  printf("\n");

  //that code return 0 (for false) and 1 (for true) when player finished the track
  int alguem_ganhou = 0;
  if(jogador1.posicao==TAMANHO_MAPA_1 || jogador2.posicao==TAMANHO_MAPA_1){
    alguem_ganhou = 1;
  }
  return alguem_ganhou;
}

#endif // MAP1_H_INCLUDED
