#ifndef MAP2_H_INCLUDED
#define MAP2_H_INCLUDED

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
int drawMap2(Jogador jogador1, Jogador jogador2){
  int i; //counter
  char x[TAMANHO_MAPA_2+1]; //vector track

  limpaTela();

  //the vector is decremented because starts at position "0"
  --jogador1.posicao;
  --jogador2.posicao;

  //clear all maps spaces in the track
  for(i=0; i<=TAMANHO_MAPA_2; i++){
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
  printf("                      -------------------------                     \n");
  printf("    |  %c  |           |  %c  |  %c  |  %c  |  %c  |           |  %c  |\n",   x[0],             x[15], x[16], x[17], x[18],               x[33]);
  printf("    -------           -------------------------           -------\n");
  printf("    |  %c  |           |  %c  |           |  %c  |           |  %c  |\n",     x[1],             x[14],               x[19],               x[32]);
  printf("    -------           -------           --------          -------\n");
  printf("    |  %c  |           |  %c  |           |  %c  |           |  %c  |\n",     x[2],             x[13],               x[20],               x[31]);
  printf("    -------           -------           --------          -------\n");
  printf("    |  %c  |           |  %c  |           |  %c  |           |  %c  |\n",     x[3],             x[12],               x[21],               x[30]);
  printf("    -------           -------           --------          -------\n");
  printf("    |  %c  |           |  %c  |           |  %c  |           |  %c  |\n",     x[4],             x[11],               x[22],               x[29]);
  printf("    -------           -------           --------          -------\n");
  printf("    |  %c  |           |  %c  |           |  %c  |           |  %c  |\n",     x[5],             x[10],               x[23],               x[28]);
  printf("    -------------------------           -------------------------\n");
  printf("    |  %c  |  %c  |  %c  |  %c  |           |  %c  |  %c  |  %c  |  %c  |\n", x[6], x[7], x[8], x[9],                x[24], x[25], x[26], x[27]);
  printf("    -------------------------           -------------------------\n");
  printf("\n");

  //that code return 0 (for false) and 1 (for true) when player finished the track
  int alguem_ganhou = 0;
  if(jogador1.posicao==TAMANHO_MAPA_2 || jogador2.posicao==TAMANHO_MAPA_2){
    alguem_ganhou = 1;
  }
  return alguem_ganhou;
}

#endif // MAP2_H_INCLUDED
