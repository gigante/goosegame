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
    int aleatorio;
    srand(time(NULL));
    aleatorio = rand()%valor_max;
    if (aleatorio==0) {
        aleatorio = 1;
    }
    return aleatorio;
}

int calculaPosicaoMapa(int pos, int tamanho) {
    if (pos>tamanho) {
        int excesso = pos - tamanho;
        pos = tamanho - excesso;
    }
    return pos;
}

int tamanhoMapa(int mapa) {
    int tamanho;
    switch (mapa) {
    case 1:
        tamanho = TAMANHO_MAPA_1+1;
        break;
    case 2:
        tamanho = TAMANHO_MAPA_2+1;
        break;
    }
    return tamanho;
}

#endif // UTILS_H_INCLUDED
