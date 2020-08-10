#ifndef DICE_H_INCLUDED
#define DICE_H_INCLUDED

#if defined(__linux__)
#include <unistd.h>
#else
#include <windows.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define NUM_MAX_DICE 6
#define TIMING_DICE 1

int jogar2dados(Jogador jogador) {
    int i, dado[2], soma;
    limpaTela();
    printf("\n<=========================== GOOSE GAME === ROLLING DICES =====================>\n\n");
    for (i=0; i<=1; i++) {
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
