#ifndef DICE_H_INCLUDED
#define DICE_H_INCLUDED

/*
  This header file is responsible to rolling dice
  Contain single method 'joga2dados' (roll two dices)
  PS.: The method geraAleatorio() belongs the header file ./utils.h
*/

#if defined(__linux__)
#include <unistd.h>
#else
#include <windows.h>
#endif

#include <stdio.h> //the standard C Library
#include <stdlib.h> //the standard C Library
#include "utils.h" //methods that can be used anywhere
#define NUM_MAX_DICE 6 //value max of dice
#define TIMING_DICE 1 //time to roll dice (in seconds)

/*
  Generate random numbers between 1 and 6
  And return the sum (simple isn't?)
*/
int jogar2dados(Jogador jogador){
  int i, dado[2], soma;
  limpaTela();
  printf("\n<=========================== GOOSE GAME === ROLLING DICES =====================>\n\n");
  for (i=0; i<=1; i++){
    printf("        Rolling dice n.%d...\n", i+1);
    sleep(TIMING_DICE);
    dado[i] = geraAleatorio(NUM_MAX_DICE);
    printf("        Dice n.%d = %d\n\n", i+1, dado[i]);
    sleep(TIMING_DICE);
  }
  soma = dado[0] + dado[1];
  printf("\n<==============================================================================>\n\n");
  printf("        %s, you go pass %d tracks\n", jogador.nome, soma);
  menuContinuar();
  return soma;
}

#endif // DICE_H_INCLUDED
