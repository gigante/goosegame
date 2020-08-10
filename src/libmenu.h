#ifndef LIBMENU_H_INCLUDED
#define LIBMENU_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

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
    } while (resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4);
    return resposta;
}

void menuCreditos(){
    char resposta;
    do {
        limpaTela();
        printf("\n");
        printf("<====================== GOOSE GAME ====================>\n");
        printf("                                                        \n");
        printf("        Program Developed for Academics Purposes        \n");
        printf("        Developer: Hiarison Gigante @gigante            \n");
        printf("        São Luis, MA - December/2011                    \n");
        printf("                                                        \n");
        printf("<======================================================>\n");

        printf("\n");
        printf("Return to the main menu? (y/n): ");
        scanf(" %c", &resposta);
    } while(resposta != 'y');
}

Jogador menuJogador(int item){
    struct Jogador jogador = {"Player", 0};
    limpaTela();
    printf("\n");
    printf("<================================= GOOSE GAME =================================>\n\n");
    printf("        Who are the players of the time?\n\n");
    printf("        Player %d: ", item);
    scanf("%30s", jogador.nome);
    return jogador;
}

void menuRegras(){
    char resposta;
    do {
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
        scanf(" %c", &resposta);
    } while(resposta != 'y');
}

int menuEscolherMapa(){
    int resposta;
    do {
        limpaTela();
        printf("\n");
        printf("<================================= GOOSE GAME =================================>\n\n");
        printf("        Choose the map\n");
        printf("        (1) Map 1: looks like the number '2' \n");
        printf("        (2) Map 2: looks like the letter 'W'  \n");
        printf("\n");
        printf("        Opcao: ");
        scanf("%d", &resposta);
    } while(resposta != 1 && resposta != 2);
    return resposta;
}

void menuContinuar(){
    char resposta;
    do {
        printf("        Continue? (y/n): ");
        scanf(" %c", &resposta);
    } while(resposta != 'y');
}

void menuDados(){
    char resposta;
    do {
        printf("        You want roll dice?? (y/n): ");
        scanf(" %c", &resposta);
    } while(resposta != 'y');
}

#endif // LIBMENU_H_INCLUDED
