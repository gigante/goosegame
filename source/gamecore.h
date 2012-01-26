#ifndef GAMECORE_H_INCLUDED
#define GAMECORE_H_INCLUDED

/*
  This Header File is responsible to control the game
  All rules were written here
*/

#include <stdio.h> //the standard C Library
#include <stdlib.h> //the standard C Library
#include "utils.h" //methods that can be used anywhere
#include "dice.h" //header file of dices
#include "maps/map1.h" //track 1
#include "maps/map2.h" //track 2
#include "animation.h" //the winner animation
#define POSICAO_INICIAL 0

/*
  This method just call the map passed as a parameter
*/
int drawMap(Jogador jogador1, Jogador jogador2, int mapa){
  int ganhou;
  switch(mapa){
    case 1:
      ganhou = drawMap1(jogador1, jogador2);
      break;
    case 2:
      ganhou = drawMap2(jogador1, jogador2);
      break;
  }
  return ganhou;
}

/*
  This method controls the game!
*/
void initGame(){
  Jogador jogador[2]; //Struct located at ./utils.h
  int i, mapa;
  int ganhou; //0 = someone won, 1 = nobody won

  //Captura o nome dos jogadores
  jogador[0] = menuJogador(1);
  jogador[1] = menuJogador(2);

  //Capture the selected map by user
  mapa = menuEscolherMapa(); //all menus are located at ./libmenu.h

  //Initializes the position of players on track
  jogador[0].posicao = POSICAO_INICIAL;
  jogador[1].posicao = POSICAO_INICIAL;

  //First draw position of players on the track
  ganhou = drawMap(jogador[0], jogador[1], mapa);

  //Control the game
  while(ganhou==0){
    for(i=0; i<=1; i++){      
      menuDados(); //dice menu      
      jogador[i].posicao += jogar2dados(jogador[i]); //add new value to position of player
      //verifies that the position of the player is bigger than the map
      jogador[i].posicao = calculaPosicaoMapa(jogador[i].posicao, tamanhoMapa(mapa));
      ganhou = drawMap(jogador[0], jogador[1], mapa); //draw the new position player
      if(ganhou==1){ //if current player have finished the race then show animation
        initAnimationWinner(jogador[i]); //show animation
        break; //return to main menu
      }
    }
  }
}

#endif // GAMECORE_H_INCLUDED
