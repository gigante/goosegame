#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include <time.h>
#define TAMANHO_MAPA_1 39
#define TAMANHO_MAPA_2 33

typedef struct Jogador {
    char nome[30];
    int posicao;
} Jogador;

void limpaTela() {
    #if defined(__linux__)
    system("clear");
    #else
    system("cls");
    #endif
}

int geraAleatorio(int valor_max) {
    srand(time(NULL));
    int aleatorio = rand() % valor_max;
    return (aleatorio == 0) ? 1 : aleatorio;
}

int calculaPosicaoMapa(int pos, int tamanho) {
    return (pos>tamanho) ? 2 * tamanho - pos : pos;
}

int tamanhoMapa(int mapa) {
    return (mapa == 1) ? TAMANHO_MAPA_1 + 1 : TAMANHO_MAPA_2 + 1;
}

#endif // UTILS_H_INCLUDED
