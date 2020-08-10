#ifndef GAMECORE_H_INCLUDED
#define GAMECORE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "dice.h"
#include "maps/map1.h"
#include "maps/map2.h"
#include "animation.h"

int drawMap(Jogador jogador1, Jogador jogador2, int mapa) {
    return (mapa == 1) ? drawMap1(jogador1, jogador2) : drawMap2(jogador1, jogador2);
}

void initGame() {
    Jogador jogador[2];
    jogador[0] = menuJogador(1);
    jogador[1] = menuJogador(2);

    int mapa = menuEscolherMapa();
    int ganhou = drawMap(jogador[0], jogador[1], mapa);

    int i;
    while (!ganhou) {
        for (i=0; i<=1; i++) {
            menuDados();

            jogador[i].posicao += jogar2dados(jogador[i]);
            jogador[i].posicao = calculaPosicaoMapa(jogador[i].posicao, tamanhoMapa(mapa));
            ganhou = drawMap(jogador[0], jogador[1], mapa);

            if (ganhou) {
                initAnimationWinner(jogador[i]); break;
            }
        }
    }
}

#endif // GAMECORE_H_INCLUDED
